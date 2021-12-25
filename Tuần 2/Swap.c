#include<stdio.h>

int main(){
	int a, b, c;
	scanf("%d %d", &a, &b);
	printf("a = %d, b = %d, c = 0\n",a ,b);
	printf("a = %d, b = %d, c = %d\n",a ,b, a);
    printf("a = %d, b = %d, c = %d\n",b ,b, a);
   	c=a;
	a=b;
	b=c;
    printf("a = %d, b = %d, c = %d\n",a ,b, c);
   
}

