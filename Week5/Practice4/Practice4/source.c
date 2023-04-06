#include <stdio.h>

int main(void) {

	int num;
	int result;

	printf("숫자를 입력하시오 : ");
	scanf_s("%d", &num);

	result = num % 2 == 0 ? 0 : 1;

	printf("result : %d", result);

}