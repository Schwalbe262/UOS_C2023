#include <stdio.h>

int factorial(int num) {

	if (num == 0 || num == 1) {
		return 1;
	}
	else {
		return num * factorial(num - 1);
	}

}

int main(void) {

	int num, result;

	printf("계산할 팩토리얼 값 입력 : ");
	scanf_s("%d", &num);

	result = factorial(num);

	printf("%d! = %d", num, result);

}