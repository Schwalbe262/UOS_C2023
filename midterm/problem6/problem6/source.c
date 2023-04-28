#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {

	double x = 0; // x 좌표
	double y = 0; // y 좌표

	int count = 0, circle = 0, count2 = 1;

	int a, b;

	printf("a 값을 입력하세요 : ");
	scanf_s("%d", &a);
	printf("b 값을 입력하세요 : ");
	scanf_s("%d", &b);

	srand(time(NULL));

	while (count < 1e+8) {
		x = (double)rand() / (double)RAND_MAX * a;
		y = (double)rand() / (double)RAND_MAX * b;
		count++;

		// 원 안에 있는지 판별
		if ( ( pow(x, 2.0)/pow(a, 2.0) + pow(y, 2.0)/pow(b, 2.0) ) <= 1) {
			circle++;
		}

		if (count % ((int)1e+8 / 10) == 0) {
			printf("%3d%%진행.. 넓이 : %lf \n", 10*count2, 4 * a * b * ((double)circle / (double)count));
			count2++;
		}
	}

	printf("타원의 넓이 : %lf", 4 * a * b * ((double)circle / (double)count));
}