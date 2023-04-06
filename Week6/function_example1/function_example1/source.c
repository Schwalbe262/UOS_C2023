#include <stdio.h>

void sum(double a, double b) {
	double result = a + b;
	printf("%lf + %lf : %lf", a, b, result);
}

void sub(double a, double b) {
	double result = a - b;
	printf("%lf - %lf : %lf", a, b, result);
}

void mul(double a, double b) {
	double result = a * b;
	printf("%lf * %lf : %lf", a, b, result);
}

void div(double a, double b) {
	double result = a / b;
	printf("%lf / %lf : %lf", a, b, result);
}

void calculator(int selector) {

	double num1, num2;

	if (selector < 1 || selector > 4) {
		printf("오류 !!");
		return;
	}

	printf("숫자 1을 입력하시오 : ");
	scanf_s("%lf", &num1);

	printf("숫자 2를 입력하시오 : ");
	scanf_s("%lf", &num2);

	if (selector == 1) sum(num1, num2);
	else if (selector == 2) sub(num1, num2);
	else if (selector == 3) mul(num1, num2);
	else if (selector == 4) div(num1, num2);

	printf("\n\n코드 실행 완료!");

}

int main(void) {

	int sel;

	printf("1.더하기 2.빼기 3.곱하기 4.나누기 : ");
	scanf_s("%d", &sel);

	calculator(sel);

	return 0;
}



