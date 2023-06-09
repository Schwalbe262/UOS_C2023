#include <stdio.h>
#include <string.h>


int main(void) {

	FILE* fp1 = NULL;
	fopen_s(&fp1, "data1.txt", "wt");

	char temp[100];
	
	printf("입력을 종료하고 싶으면 END를 입력하시오\n");

	while (1) {
		printf("문자열 입력 : ");
		gets(temp);
		if (strcmp(temp, "END") == 0) break;
		fputs(temp, fp1);
	}
	
	fclose(fp1);
}


