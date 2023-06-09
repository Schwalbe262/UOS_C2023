#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE* fp1 = NULL;
    char* buf = NULL;
    size_t bufSize = 0;

    fopen_s(&fp1, "data1.txt", "rt");

    if (fp1 == NULL) {
        printf("파일 오픈 실패!");
        return -1;
    }

    fseek(fp1, 0, SEEK_END);
    bufSize = ftell(fp1);
    fseek(fp1, 0, SEEK_SET);

    buf = (char*)malloc((bufSize + 1) * sizeof(char));
    if (buf == NULL) {
        printf("메모리 할당 실패!");
        fclose(fp1);
        return -1;
    }

    memset(buf, 0, bufSize + 1);
    fgets(buf, bufSize+1, fp1);
    printf("%s", buf);

    free(buf);
    fclose(fp1);

    return 0;

}

