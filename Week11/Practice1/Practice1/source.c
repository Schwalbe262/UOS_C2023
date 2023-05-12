#include <stdio.h>

int main(void) {

	int arr[10] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };

	int* ptr = arr;

	for (int i = 0; i < 10; i++) {
		printf("%d번 배열 : %d\n",i, *(ptr++));
		//ptr++;
	}

}