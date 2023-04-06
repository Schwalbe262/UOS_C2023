#include <stdio.h>

int main(void) {

	int opt; // 계산기 기능 선택 (1:더하기, 2:빼기, 3:곱하기, 4:나누기)
	double num1, num2; // 피연산자

	printf("원하는 기능을 입력하시오.\n");
	printf("1.더하기 2.빼기 3.곱하기 4.나누기\n");
	printf("기능 : ");
	scanf_s("%d", &opt);

	if (opt < 1 && opt > 4) {
		printf("비정상적인 값을 입력하여 종료합니다.");
		return 0;
	}

	printf("숫자 1을 입력하세요 : ");
	scanf_s("%lf", &num1);
	printf("숫자 2를 입력하세요 : ");
	scanf_s("%lf", &num2);

	if (opt == 1) printf("%lf + %lf = %lf", num1, num2, num1 + num2);
	else if (opt == 2) printf("%lf - %lf = %lf", num1, num2, num1 - num2);
	else if (opt == 3) printf("%lf * %lf = %lf", num1, num2, num1 * num2);
	else if (opt == 4) printf("%lf / %lf = %lf", num1, num2, num1 / num2);
	else printf("error");

}