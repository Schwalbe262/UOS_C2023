#include <stdio.h>

struct p {
    int result;
    int itr;
};

struct p fibo(int num) { 

    static struct p return_value = { 0, 0 };
    return_value.itr++; // 함수 실행 횟수 누적

    if (num == 0) return_value.result = 0;
    else if (num == 1) return_value.result = 1;
    else return_value.result = fibo(num-1).result + fibo(num - 2).result;

    return return_value;

}

struct p fibo_for(int num) {

    static struct p return_value = { 0, 0 };
    
    int f1 = 0, f2 = 1, f3;

    for (int i = 0; i <= num; i++) {
        return_value.itr++; // 루프 실행 횟수 누적
        if (i == 1) continue;
        else if (i == 2) continue;
        else {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
            return_value.result = f3;
        }
    }

    return return_value;
}

int main(void) {

    int num;

    printf("몇번째 피보나치 수열까지 출력할까요? : ");
    scanf_s("%d", &num);

    // 재귀함수 사용 케이스
    time_t t1 = clock(NULL);
    printf("==재귀함수 사용 ==\n");
    for (int i = 1; i <= num; i++) {
        struct p result = fibo(i);
        printf("%d번째 피보나치 수열 값 : %d (함수 실행 횟수 : %d)\n", i, result.result, result.itr);
    }
    printf("실행시간 : %dms\n", (int)(clock(NULL) - t1));

    // 반복문 사용 케이스
    time_t t2 = clock(NULL);
    printf("==반복문 사용 ==\n");
    for (int i = 1; i <= num; i++) {
        struct p result = fibo_for(i);
        printf("%d번째 피보나치 수열 값 : %d (루프 실행 횟수 : %d)\n", i, result.result, result.itr);
    }
    printf("실행시간 : %dms\n", (int)(clock(NULL) - t2));

}


