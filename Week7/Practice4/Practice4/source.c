#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("문장을 입력하세요 : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    int len_with_space = strlen(str); // 전체 글자수
    int len_without_space = 0; // 공백제외 글자수
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            len_without_space++;
        }
    }

    printf("글자수 (공백포함): %d\n", len_with_space);
    printf("글자수 (공백제외): %d\n", len_without_space);

    return 0;
}
