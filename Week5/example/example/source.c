#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _USE_MATH_DEFINES
#include <math.h>


int main(void) {

	int i = 0;
	int sum = 0;

	while (1) {

		sum += i;
		i++;

		if (sum > 500) {
			break;
		}

	}

	printf("i °ª : %d, sum : %d", i, sum);

}







