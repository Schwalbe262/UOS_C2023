#include <stdio.h>

int gcd1(int num1, int num2) {

	for (int i = 1; i <= num1 * num2; i++) {
		if (i % num1 == 0 && i % num2 == 0) { // 처음으로 나오는 공배수 (= 최소공배수)
			printf("최소공배수 : %d\n", i);
			return i;
		}
	}
}


int gcd2(void) {

	int num1, num2;
	printf("숫자1을 입력하시오 : ");
	scanf_s("%d", &num1);
	printf("숫자2를 입력하시오 : ");
	scanf_s("%d", &num2);

	for (int i = 1; i <= num1 * num2; i++) {
		if (i % num1 == 0 && i % num2 == 0) { // 처음으로 나오는 공배수 (= 최소공배수)
			printf("최소공배수 : %d\n", i);
			return i;
		}
	}
}


int lcm1(int num1, int num2) {
	int result = 1;

	for (int i = 1; i <= num1 * num2; i++) {
		if (i % num1 == 0 && i % num2 == 0) { // i가 num1과 num2의 공약수인 경우
			result = i; // 현재까지 가장 큰 값 기록 됨
		}
	}
	printf("최대공약수 : %d", result);
	return result;
}


int lcm2(void) {

	int result = 1;

	int num1, num2;
	printf("숫자1을 입력하시오 : ");
	scanf_s("%d", &num1);
	printf("숫자2를 입력하시오 : ");
	scanf_s("%d", &num2);

	for (int i = 1; i <= num1 * num2; i++) {
		if (i % num1 == 0 && i % num2 == 0) { // i가 num1과 num2의 공약수인 경우
			result = i; // 현재까지 가장 큰 값 기록 됨
		}
	}
	printf("최대공약수 : %d", result);
	return result;
}


int is_prime1(int num) {

	if (num < 2) { // 0, 1 입력 들어왔을 경우
		printf("%d는 소수가 아닙니다.", num);
		return 0; // 소수 X
	}
	for (int i = 2; i*i < num; i++) {
		if (num % i == 0) {
			printf("%d는 소수가 아닙니다.", num);
			return 0; // 소수 X
		}
	}
	printf("%d는 소수입니다.", num);
	return 1; // 소수 O
}


int is_prime2(void) {

	int num;
	printf("숫자를 입력하시오 : ");
	scanf_s("%d", &num);

	if (num < 2) { // 0, 1 입력 들어왔을 경우
		printf("%d는 소수가 아닙니다.", num);
		return 0; // 소수 X
	}
	for (int i = 2; i * i < num; i++) {
		if (num % i == 0) {
			printf("%d는 소수가 아닙니다.", num);
			return 0; // 소수 X
		}
	}
	printf("%d는 소수입니다.", num);
	return 1; // 소수 O
}
