#include <stdio.h>

int main(void) {

	int arr[4][4] = { {1, 2, 3, 0}, {1, 4, 7, 0},
		{1, 5, 9, 0}, {2, 3, 4, 0} };

	for (int i = 0; i < 4; i++) {
		arr[i][3] = arr[i][0] + arr[i][1] + arr[i][2];
		printf("%d행 : %d, %d, %d (합 %d)\n"
		,(i+1), arr[i][0], arr[i][1], arr[i][2], arr[i][3]);
	}
}

