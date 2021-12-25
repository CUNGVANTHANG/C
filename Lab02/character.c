#include<stdio.h>

int main(){
	char a;
	scanf("%c", &a);
	if(97<=a && a<=122){
		printf("Chu in thuong");
	}
	else if(65<=a && a<=89){
	    printf("Chu in hoa");
	}	
	else if(48<=a && a<=57){
		printf("Chu so");
	}
	else if(0<=a && a<=32){
		printf("Khoang trang");
	}	
	else{
		printf("Ki tu dac biet");
	}
}	
