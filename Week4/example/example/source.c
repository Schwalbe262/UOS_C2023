#include <stdio.h>

int main(void) {

	char corner;

	printf("�н� �ڳ� �Է�");
	scanf_s("%c", &corner);

	if (corner == 'A') {
		printf("������ A�ڳ� �н��� �ø��Դϴ�.");
	}
	if (corner == 'B') {
		printf("������ B�ڳ� �н��� ��ġ�������Դϴ�.");
	}
	if (corner == 'C') {
		printf("������ C�ڳ� �н��� ����Դϴ�.");
	}
}