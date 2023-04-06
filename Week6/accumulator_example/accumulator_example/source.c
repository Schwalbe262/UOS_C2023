#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int acc(int num) {
	static int acc_result = 0;
	acc_result += num;
	return acc_result;
}

int main(void) {

	int random, acc_value = 0;
	
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		random = rand() % 10 + 1; // 1~10 난수
		acc_value = acc(random);
		printf("누적값 : %d (input %d)\n", acc_value, random);
	}
}




