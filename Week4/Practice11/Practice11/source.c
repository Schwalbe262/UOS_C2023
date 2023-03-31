#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {

	double x = 0; // x ��ǥ
	double y = 0; // y ��ǥ

	int count = 0, circle = 0, count2 = 1;

	srand(time(NULL));

	while (count < 1e+8) {
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		count++;

		// �� �ȿ� �ִ��� �Ǻ�
		if (sqrt(pow(x, 2.0) + pow(y, 2.0)) <= 1) {
			circle++;
		}

		if (count % ((int)1e+8 / 100) == 0) {
			printf("%3d%%����.. ������ : %lf ",count2, 4 * ((double)circle / (double)count));
			for (int i = 0; i < count2 / 5; i++) {
				printf("��");
			}
			for (int i = 0; i < 20 - count2 / 5; i++) {
				printf("��");
			}
			printf("\n");
			count2++;
		}
	}

	printf("������ : %lf", 4 * ((double)circle / (double)count));
}