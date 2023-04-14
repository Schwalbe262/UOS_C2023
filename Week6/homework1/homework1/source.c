#include <stdio.h>

void convert_base(int num, int base) {
    if (num == 0) {
        return;
    }
    int quotient = num / base;
    int remainder = num % base;
    if (remainder < 10) {
        printf("%d", remainder);
    }
    else {
        printf("%c", remainder - 10 + 'A');
    }
    convert_base(num / base, base);
}



int main() {
    int num, base;
    printf("변환할 10진수 입력 : ");
    scanf_s("%d", &num);
    printf("변환할 진법 입력 (2-16): ");
    scanf_s("%d", &base);
    printf("%d의 %d진수 변환 값 : ", num, base);
    convert_base(num, base);
    printf("\n");
    return 0;
}