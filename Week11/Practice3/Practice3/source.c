#include <stdio.h>

int main(void) {

	char* animals[] = { "cat", "dog", "rabbit", "fox" };

	printf("%s \n", animals[1]);
	printf("%p \n", animals[0]);
	printf("%p \n", animals[0] + 1);
	printf("%c \n", *(animals[2]));
	printf("%c \n", *(animals[3] + 2));
	animals[0] = "kitty";
	printf("%s \n", animals[0]);
	printf("%s \n", animals[2] + 3);



}

