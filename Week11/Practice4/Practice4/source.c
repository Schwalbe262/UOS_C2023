#include <stdio.h>

void change(int* num1, int* num2) {
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main(void) {

	int num1 = 45510;
	int num2 = 2023;

	change(&num1, &num2);

	printf("num1 value : %d\n", num1);
	printf("num2 value : %d\n", num2);

}