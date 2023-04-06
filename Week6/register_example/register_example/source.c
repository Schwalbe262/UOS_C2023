#include <stdio.h>
#include <time.h>

int main(void) {

	int tmp1 = 0;
	int tmp2 = 0;

	time_t t1 = clock(NULL);

	for (volatile register int i = 0; i < 10000; i++) {
		for (volatile register int j = 0; j < 10000; j++) {
			tmp1 += i;
		}
	}

	printf("실행시간 : %d\n", (int)(clock(NULL) - t1));

	time_t t2 = clock(NULL);

	for (volatile int i = 0; i < 10000; i++) {
		for (volatile int k = 0; k < 10000; k++) {
			tmp2 += i;
		}
	}

	printf("실행시간 : %d\n", (int)(clock(NULL) - t2));



}