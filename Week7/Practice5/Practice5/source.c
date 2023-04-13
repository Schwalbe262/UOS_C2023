#include <stdio.h>
#include <string.h>

int main() {

    char str[100];

    printf("문장을 입력하세요 : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    printf("입력한 문자열 : %s\n", str);

    char temp;
    int len = strlen(str);

    printf("%d", len);


    char str_r[100];
    for (int i = 0; i < len; i++) {
        str_r[len - i - 1] = str[i];
    }
    str_r[len] = '\0'; // 끝에 null 문자 삽입

    printf("뒤집힌 문자열 : %s", str_r);


    /*

    for (int i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("뒤집힌 문자열 : %s", str);

    */

    return 0;
}
