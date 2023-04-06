#include <stdio.h>

int main(void) {

	char corner; // 코너

	printf("코너 입력 : ");
	scanf_s("%c", &corner, 1);

	switch (corner) {
	case 'A':
		printf("오늘의 A코너 학식은 라면 입니다.");
		break;
	case 'B':
		printf("오늘의 B코너 학식은 치킨텐더샐러드 입니다.");
		break;
	case 'C':
		printf("오늘의 C코너 학식은 나물비빔밥 입니다.");
		break;
	case 'D':
		printf("오늘의 D코너 학식은 동파육 입니다.");
		break;
	default:
		printf("코너를 정확히 입력해주세요.");
	}


}