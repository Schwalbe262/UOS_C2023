#include <stdio.h>

int main(void) {

	int num;
	int result;

	scanf_s("%d", &num);

	result = (num > 0) ? 1 : (num < 0) ? -1 : 0;

	printf("result : %d", result);
	

}