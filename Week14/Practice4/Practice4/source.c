#include <stdio.h>

typedef struct pos {
	double xpos;
	double ypos;
}Pos;

typedef struct product {
	char name[30];
	int price;
	Pos posxy;
}Product;

Product write_product(void) {

	Product pp;
	
	printf("상품의 이름을 입력하세요 : ");
	fgets(pp.name, sizeof(pp.name), stdin);
	pp.name[strcspn(pp.name, "\n")] = 0;

	printf("상품의 가격을 입력하세요 : ");
	scanf_s("%d", &pp.price);

	printf("상품의 x좌표를 입력하세요 : ");
	scanf_s("%lf", &pp.posxy.xpos);

	printf("상품의 y좌표를 입력하세요 : ");
	scanf_s("%lf", &pp.posxy.ypos);

	return pp;

}

void read_product(Product pp) {
	printf("%s (가격 : %d원) (위치 %.2lf, %.2lf)\n",
		pp.name, pp.price, pp.posxy.xpos, pp.posxy.ypos);
}


int main(void) {

	Product p1, p2;

	p1 = write_product();
	read_product(p1);

	p2 = write_product();
	read_product(p2);


}