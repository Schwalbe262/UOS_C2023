#include <stdio.h>
#include <string.h>

int main(void) {

	FILE* fp1 = NULL;

	fopen_s(&fp1, "data1.txt", "wt");
	
	char temp[100];
	printf("���ڿ� �Է� : ");
	fgets(temp, sizeof(temp), stdin);
	fputs(temp, fp1);

	fclose(fp1);

}



