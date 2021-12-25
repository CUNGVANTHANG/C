#include<stdio.h>

int isLeapYear(int y){
	if((y%400==0)||(y%4==0 && y%100!=0))
	    return 1;
	else 
	    return 0;    
	
}	

int main(){
	int a, b;
	int i;
    printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	printf("Cac nam nhuan tu %d den %d:\n", a, b);
	for(i=a;i<=b;i++){
		if(isLeapYear(i)==1){
			printf("%d,", i);
		}
			
    }
    return 0;
}	
	
	
	
	
	
	
