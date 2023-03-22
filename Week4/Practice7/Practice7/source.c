#include <stdio.h>

int main(void) {

	int Num;

	printf("출력할 구구단 단수 입력 : ");
	scanf_s("%d", &Num);

	for (int i = 1; i < 10; i++) {
		printf("%d X %d = %d\n", Num, i, Num * i);
	}


}