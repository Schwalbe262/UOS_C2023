#include <stdio.h>

int func(int* arr) {
	
	int result = 0;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		result += arr[i];
	}
	printf("%d", sizeof(arr));
	return result;
}

int main(void) {

	int arr[10] = { 1, 2, 3, 4, 5 };
	int result = 0;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		result += arr[i];
	}

	printf("%d", sizeof(arr));

	//printf("%d \n", result);
	printf("%d \n",func(arr));


}

	


