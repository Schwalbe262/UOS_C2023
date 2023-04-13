#include <stdio.h>

#define LEN 10

int sum(int num[], int length) {
	int result = 0;
	for (int i = 0; i < length; i++) {
		result += num[i];
	}
	return result;
}

int main(void) {

	int length = LEN;
	int num[LEN] = {0};

	for (int i = 0; i < LEN; i++) {
		printf("숫자 %d 입력 : ", (i + 1));
		scanf_s("%d", &num[i]);
	}

	int result = sum(num, length);
	printf("합계 : %d", result);

}



