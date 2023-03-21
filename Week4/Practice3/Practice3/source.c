#include <stdio.h>

int main(void) {

	int xpos, ypos;

	printf("x좌표 입력 : ");
	scanf_s("%d", &xpos);
	printf("y좌표 입력 : ");
	scanf_s("%d", &ypos);

	if (xpos > 0) {
		if (ypos > 0) printf("1사분면");
		else printf("4사분면");
	}
	else if (xpos < 0) {
		if (ypos > 0) printf("2사분면");
		else printf("3사분면");
	}
	else {
		printf("원점");
	}

}