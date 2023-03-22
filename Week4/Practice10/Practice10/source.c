#include <stdio.h>

int main(void) {
	
	int Num;
	int i = 0;

	printf("출력할 구구단 단수 입력 : ");
	scanf_s("%d", &Num);

	while (i < 10) {
		printf("%d X %d = %d\n", Num, i + 1, Num * (i + 1));
		i++;
	}

}