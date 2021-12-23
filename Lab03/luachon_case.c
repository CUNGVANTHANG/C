#include<stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int n, tong, hieu, tich, thuong;
	printf("Nhap lua chon n:");
	scanf("%d", &n);
	switch(n){
	case 1:
		tong = a + b;
		printf("Tong: %d", tong);
		break;
	case 2:
		 hieu = a-b;
		printf("Hieu: %d", hieu);
		break;
	case 3:
		 tich = a*b;
		printf("Tich: %d", tich);
		break;
	case 4:
	     thuong = a/b;
		printf("Thuong: %d", thuong);
		break;	
	}	
}	
