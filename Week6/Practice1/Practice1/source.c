#include <stdio.h>

double calc(double a, double b) {
	double result = a - b + 3.0;
	return result;
}

int main(void) {

	double num1, num2, result;

	printf("숫자 1을 입력하시오 : ");
	scanf_s("%lf", &num1);

	printf("숫자 2를 입력하시오 : ");
	scanf_s("%lf", &num2);

	result = calc(num1, num2);

	printf("계산 결과 : %lf", result);

}