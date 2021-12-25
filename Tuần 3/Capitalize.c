#include<stdio.h>

int main(){
	char a;
	scanf("%c", &a);
	if(97<= a && a<123){
		printf("%c", a-32);
	}	
	else if (65<= a && a<91){
		printf("%c", a);	
	}
	else if (48<=a && a<58){
		printf("%c", a);
	}
    else{
	  printf("%c" ,a);
	}	
}	

