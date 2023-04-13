#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN 10

int* create_and_fill_array_with_random_numbers(int arr[]) {

    // 현재 시간을 기반으로 난수 생성기 초기화
    srand(time(NULL));

    for (int i = 0; i < LEN; i++) {
        arr[i] = rand() % 101; // 0부터 100 사이의 난수 생성
    }

    return arr;
}

int main(void) {
    int arr[LEN] = { 0 };
    int* arr2;

    arr2 = create_and_fill_array_with_random_numbers(arr);

    

    // 배열 출력
    printf("배열: ");
    for (int i = 0; i < LEN; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}