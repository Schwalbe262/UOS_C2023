#include <stdio.h>

void delete_odd(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		if (i % 2 == 1) {
			arr[i] = 0;
		}
	}
}

int main(void) {

	int arr[] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024 };
	int size = sizeof(arr) / sizeof(int);

	delete_odd(arr, size);

	for (int i = 0; i < size; i++) {
		printf("%d ",arr[i]);
	}



}