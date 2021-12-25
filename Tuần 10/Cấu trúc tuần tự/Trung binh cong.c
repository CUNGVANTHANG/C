#include<stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	float x = a;
	float y = b;
    if((a+b)%2==0){
	     printf("%d", (a+b)/2);
	     
	}
	
	if((a+b)%2!=0){
		float tB = (x+y)/2;
		printf("%.1f", tB);
	}	
}
