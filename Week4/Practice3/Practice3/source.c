#include <stdio.h>
#include <time.h>

int main(void) {

    time_t t;            // time_t 타입 
    t = time(NULL);      // time() 함수를 통해서 현재 시간 반환
    printf("%lld", t);   // 출력
    return 0;

}