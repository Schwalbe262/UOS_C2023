/*서울시립대학교 전자전기컴퓨터공학부
  2016440095 이승수
문제 4 */

#include<stdio.h> //Standard Input/Output library header(별도 지정없을시 입력 키보드, 출력 모니터)

int main(void) {
	char name[30], major[30];  // 문자열, name:이름. major:전공
	int birthday, code;   // 정수 자료형, birthday:생년월일, code:학번
	char score; // 문자 자료형, 원하는 학점;

	// <입력단계>
	printf("이름을 입력하세요 : ");  // 이름입력지시 출력
	scanf_s("%s", name, (int)sizeof(name));  // 입력받은 이름을 name에 저장 ; 문자열 서식문자 %s, 문자열은 그 자체가 포인터
	printf("희망학점을 입력하시오 : ");  // 희망학점 입력지시 출력
	scanf_s(" %c", &score); // 입력받은 학점을 score에 저장 // white space 사용
	printf("생년월일 8자리를 입력하시오 : ");   // 생년월일 입력지시 출력
	scanf_s("%d", &birthday);  //입력받은 생년월일을 birthday에 저장 ; 정수 형 서식문자 %d, &으로 포인터 
	printf("학번을 입력하시오 : ");   // 학번 입력지시 출력
	scanf_s("%d", &code);   //입력받은 학번을 code에 저장
	printf("학과명을 입력하시오 : ");   // 학과명 입력지시 출력
	scanf_s("%s", major, (int)sizeof(major));  //입력받은 학과명을 major에 저장

	// <출력단계>
	printf("\n\n\n이름 : %s\n", name);   //저장된 이름을 출력
	switch (score) {  //희망학점 출력
	case 'A':
		printf("희망학점 : %c\n", score);
		break;
	case 'B':
		printf("희망학점 : %c\n", score);
		break;
	case 'C':
		printf("희망학점 : %c\n", score);
		break;
	case 'D':
		printf("희망학점 : %c\n", score);
		break;
	case 'F':
		printf("희망학점 : %c\n", score);
		break;
	default:
		printf("희망학점은 A, B, C, D, F중 하나를 입력할것.\n");  // 오류문장
		break;
	}

	printf("생년월일 : %d\n", birthday);   //저장된 생년월일을 출력

	printf("입학년도 : ");   //저장된 학번을 출력
	printf("%d", (code / 1000000000)); //10억자리 숫자 추출
	printf("%d", (code % 1000000000) / 100000000); //1억자리 숫자 추출
	printf("%d", (code % 100000000) / 10000000); //천만자리 숫자 추출
	printf("%d\n", (code % 10000000) / 1000000); //100만자리 숫자 추출
	printf("학과명 : %s\n", major);   //저장된 학과명을 출력
}