#include <stdio.h>

int main(void) {

	int num;
	int arr[9] = {0};
	int* ptr = arr;

	printf("숫자를 입력하시오 : ");
	scanf_s("%d", &num);

	for (int i = 1; i < 10; i++) {
		*ptr = num * i;
		ptr++;
	}

	for (int i = 0; i < 9; i++) {
		printf("%d X %d = %d\n", num, i + 1, arr[i]);
	}


}


