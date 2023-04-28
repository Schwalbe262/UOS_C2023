#include <stdio.h>

double ReLU(double num) {
    
    double result = num >= 0 ? num : 0;
    return result;
}

double leaky_ReLU(double num) {

    double result = num >= 0 ? num : 0.1*num;
    return result;
}

int main(void) {
    
    double num;

    printf("숫자를 입력하세요 : ");
    scanf_s("%lf", &num);

    printf("ReLU : %.2lf\n", ReLU(num));
    printf("leaky_ReLU : %.2lf\n", leaky_ReLU(num));


    return 0;
}