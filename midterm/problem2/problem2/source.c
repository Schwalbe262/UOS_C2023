#include <stdio.h>
#include <time.h>

int main(void) {

	time_t t; // time_t 타입 변수
	t = time(NULL); // 현재 시간

	int pass_day = t / 60 / 60 / 24;
	int pass_hours = t / 60 / 60;
	int pass_minutes = t / 60;
	int pass_seconds = t;

	printf("경과 일 : %d일\n", pass_day);
	printf("경과 시간 : %d시간\n", pass_hours);
	printf("경과 분 : %d분\n", pass_minutes);
	printf("경과 초 : %d초\n", pass_seconds);


}