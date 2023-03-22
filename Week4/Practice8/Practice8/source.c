#include <stdio.h>

int main(void) {

	// 구구단 i단
	for (int i = 2; i < 10; i++) {

		printf("구구단 %d단\n", i);
		//i단 j번째
		for (int j = 2; j < 10; j++) {
			printf("%d X %d = %d\n", i, j, i * j);
		}
		printf("\n");

	}

}


