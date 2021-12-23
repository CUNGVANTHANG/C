#include<stdio.h>

int main(){
	int a;
	printf("Nhap so nam can kiem tra = ");
	scanf("%d", &a);
	if(a%4==0 && a%100!=0 || a%400==0){
		printf("%d la nam nhuan", a);
	}
	else if(a%4==0 && a%100==0 || a%4!=0){
		printf("%d khong la nam nhuan", a);
	}	
}	
