#include <stdio.h>

void convert_base(int num, int base) {
    if (num == 0) {
        return;
    }
    convert_base(num / base, base);
    int remainder = num % base;
    if (remainder < 10) {
        printf("%d", remainder);
    }
    else {
        printf("%c", remainder - 10 + 'A');
    }
}

int main() {
    int num, base;
    printf("Enter a positive integer: ");
    scanf_s("%d", &num);
    printf("Enter the target base (2-16): ");
    scanf_s("%d", &base);
    printf("%d in base %d: ", num, base);
    convert_base(num, base);
    printf("\n");
    return 0;
}
