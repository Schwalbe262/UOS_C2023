#include <stdio.h>

void gugudan(int num) {

	printf("구구단 %d단\n", num);
	for (int i = 2; i < 10; i++) {
		printf("%d X %d = %d\n", num, i, num*i);
	}
}

int main(void) {
	
	int num;
	printf("구구단 몇 단을 출력할까요? : ");
	scanf_s("%d", &num);

	if (num < 2 || num>9) {
		printf("2와 9사이 값을 입력해주세요\n");
	}
	else {
		gugudan(num);
	}

	
}