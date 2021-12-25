#include<stdio.h>
#include<math.h>

int main(){
	float r;
	printf("Nhap ban kinh r = ");
	scanf("%f", &r);
	float chuvi= r*2*3.14;
	float *CV;
	CV = &chuvi;
	float dientich = r*r*3.14;
	float *DT;
	DT = &dientich;
	printf("Chu vi va dien tich hinh tron: %.2f %.2f", *CV, *DT);
	return 0;
}
