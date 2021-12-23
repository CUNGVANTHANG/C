#include<stdio.h>

void uocChung(int a, int b){
    printf("ucln(%d, %d) = ", a, b);
	if(a == 0 && b == 0){
		printf("");
	}
	  else if(a == 0 || b == 0){
	  	    
			printf("%d", (a==0)?b:a);
	}
	  else {
	  	  while(a!=b){
	  	  	if(a>b){
	  	  		a=a-b;  		
	}  
	       else{
	       	    b=b-a;
	}	  		
	}
	     
		 printf("%d", a); 	  	
	}  
	    return 0;	  
} 

int main(){
	unsigned int a, b;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	uocChung(a, b);
}	
		
	
