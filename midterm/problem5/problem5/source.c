#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

int main(void) {
    char input[MAX_LENGTH + 1];
    int length, i, total_chars = 0, non_space_chars = 0;
    int counts[4] = { 0 };

    printf("문자열을 입력하세요 (최대 1000자): ");
    fgets(input, MAX_LENGTH + 1, stdin);

    length = strlen(input);
    if (input[length - 1] == '\n') {
        input[length - 1] = '\0';
        length -= 1;
    }

    // 글자수 계산 및 특정 알파벳 개수 세기
    for (i = 0; i < length; i++) {
        char ch = input[i];

        if (ch != ' ') {
            non_space_chars++;
        }

        if (ch >= 'A' && ch <= 'Z') {
            ch = ch - 'A' + 'a';
        }

        switch (ch) {
        case 'a':
            counts[0]++;
            break;
        case 'b':
            counts[1]++;
            break;
        case 'c':
            counts[2]++;
            break;
        case 'd':
            counts[3]++;
            break;
        default:
            break;
        }
    }

    total_chars = length;
    printf("공백 포함 글자수: %d\n", total_chars);
    printf("공백 제외 글자수: %d\n", non_space_chars);

    printf("a의 개수: %d\n", counts[0]);
    printf("b의 개수: %d\n", counts[1]);
    printf("c의 개수: %d\n", counts[2]);
    printf("d의 개수: %d\n", counts[3]);

    return 0;
}