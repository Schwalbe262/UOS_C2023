#include <stdio.h>

int sum(int a, int b) {
	int result = a + b;
	printf("%d + %d = %d\n", a, b, result);
	return result;
}

int sub(int a, int b) {
	int result = a - b;
	printf("%d - %d = %d\n", a, b, result);
	return result;
}

int mul(int a, int b) {
	int result = a * b;
	printf("%d * %d = %d\n", a, b, result);
	return result;
}

int div(int a, int b) {
	int result = a / b;
	printf("%d / %d = %d\n", a, b, result);
	return result;
}

