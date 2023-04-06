#include <stdio.h>

int fibo(int num) {

	if (num == 0) return 0;
	else if (num == 1) return 1;
	else return (fibo(num - 1) + fibo(num - 2));
	
}

int main(void) {

	int num;

	printf("몇번째 피보나치 수열까지 출력할까요? : ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		printf("%d번째 피보나치 수열 값 : %d\n", i, fibo(i));
	}
}