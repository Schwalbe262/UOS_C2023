#include <stdio.h>

int main(void) {

	int Num = 10;

	printf("%d�� �Ƕ�̵�\n", Num);
	for (int i = 0; i < Num; i++) {

		for (int j = 0; j < Num - i - 1; j++) {
			printf(" ");
		}
		for (int j = 0; j < (2 * i + 1); j++) {
			printf("*");
		}
		printf("\n");

	}
}


