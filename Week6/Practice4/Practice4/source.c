#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_quiz(int num) {

	static int value = 0;
	if (value == 0) {
		srand(time(NULL));
		value = rand() % 20 + 1; // 1~20 난수
	}

	if (num > value){
		printf("정답보다 큰 값입니다.\n");
		return 1;
	}
	if (num < value) {
		printf("정답보다 작은 값입니다.\n");
		return -1;
	}
	if (num == value) {
		printf("정답입니다!!");
		return 0;
	}

}

int main(void) {

	while (1) {
		int num, quiz_result;
		printf("숫자를 입력하세요 : ");
		scanf_s("%d", &num);
		if (random_quiz(num) == 0) break;
	}
}