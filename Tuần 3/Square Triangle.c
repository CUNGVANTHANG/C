#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a*a+b*b==c*c && a>0 && b >0 && c>0 
	|| a*a+c*c==b*b && a>0 && b >0 && c>0 
	|| b*b+c*c==a*a && a>0 && b >0 && c>0 ){
    	printf("true");
    }
	else{
		printf("false");
	}		
    
      
    
}
