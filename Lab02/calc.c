#include<stdio.h>

int main(){
	float a, b;
	printf("Nhap x = ");
	scanf("%f", &a);
	printf("\nNhap y = ");
	scanf("%f", &b);
	printf("\nTong = %.0f", a+b);
	printf("\nHieu = %.0f", a-b);
	printf("\nTich = %.0f", a*b);
	printf("\nThuong = %.1f", a/b);
	printf("\nTong binh phuong = %.0f", a*a + b*b);

	
}	
