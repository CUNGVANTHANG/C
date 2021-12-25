#include<stdio.h>
#include<conio.h>

int main(){
	unsigned int a, i, tong;
	tong = 0;
	for(i=1;;i++){
		printf("Nhap so:");
		scanf("%d", &a);
		tong  = tong + a;
		if(a==0){
			printf("Tong = %d", tong);
			break;
		}	
	}
	
	return 0;
}	
