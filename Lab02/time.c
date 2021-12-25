#include<stdio.h>

int main(){
	int a, gio, phut, giay;
	printf("Nhap so giay = ");
	scanf("%d", &a);
	gio = a/3600;
	phut = (a-gio*3600)/60;
	giay = a- gio*3600 - phut*60;
	printf("gio:phut:giay = %d:%d:%d", gio, phut, giay);
}	
