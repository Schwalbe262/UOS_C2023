#include <stdio.h>

int main(void) {

	char corner;

	printf("학식 코너 입력");
	scanf_s("%c", &corner);

	if (corner == 'A') {
		printf("오늘의 A코너 학식은 냉면입니다.");
	}
	if (corner == 'B') {
		printf("오늘의 B코너 학식은 김치볶음밥입니다.");
	}
	if (corner == 'C') {
		printf("오늘의 C코너 학식은 돈까스입니다.");
	}
}