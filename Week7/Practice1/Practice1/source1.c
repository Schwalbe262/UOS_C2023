#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	srand(time(NULL));
	int num[10] = {};
	int sum = 0;
	double avg;

	for (int i = 0; i < 10; i++) {
		num[i] = rand() % 11;
		printf("index %d : %d\n", i, num[i]);
		sum += num[i];
	}

	avg = (double)sum / 10;
	printf("\n평균 : %lf\n", avg);

}