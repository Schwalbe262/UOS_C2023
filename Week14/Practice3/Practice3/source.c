#include <stdio.h>

int main(void) {

	struct goods {
		char name[30];
		int price;
		float grade;
	};

	struct goods g1;

	printf("상품명을 입력하시오 : ");
	fgets(g1.name, sizeof(g1.name), stdin);
	g1.name[strcspn(g1.name, "\n")] = 0;

	printf("가격을 입력하시오 : ");
	scanf_s("%d", &g1.price);

	printf("평점을 입력하시오 : ");
	scanf_s("%f", &g1.grade);

	printf("\n");
	printf("%s : %d원 (평점 : %.2f)", g1.name, g1.price, g1.grade);



}