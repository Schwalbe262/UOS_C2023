#include <stdio.h>
#include <string.h>

int main(void) {
    FILE* fp = NULL;
    char line[100];
    char temp[100];

    fopen_s(&fp, "data1.txt", "rt");

    if (fp == NULL) {
        printf("파일을 열 수 없습니다.");
        return 1;
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
        fgets(temp, sizeof(temp), stdin);

        if (strcmp(line, temp) == 0) {
            printf("일치\n");
        }
        else {
            printf("불일치\n");
        }
    }

    fclose(fp);

    return 0;
}