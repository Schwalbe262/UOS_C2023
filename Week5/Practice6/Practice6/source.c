#include <stdio.h>

int main(void) {

	int sum = 0;
	int Num1, Num2;

	printf("Num1 입력 : ");
	scanf_s("%d", &Num1);
	printf("Num2 입력 : ");
	scanf_s("%d", &Num2);

	for (int i = Num1; i <= Num2; i++) {
		sum += i;
	}
	printf("%d부터 %d 까지의 정수 합 : %d",Num1, Num2, sum);



}