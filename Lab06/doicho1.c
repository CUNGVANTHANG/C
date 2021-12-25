#include<stdio.h>

void f(int *a, int *b, int *c){
    int tmp = *b;
	*b=*a;
	*a=tmp;
	tmp = *c;
    *c=*a;
    *a=tmp;
}	

int main(){
	int a, b, c;
	printf("Nhap a, b, c:\n");
	scanf("%d %d %d", &a, &b, &c);
	f(&a,&b,&c);
	printf("Sau khi doi cho:\n");
	printf("%d %d %d", a, b, c);
}	
