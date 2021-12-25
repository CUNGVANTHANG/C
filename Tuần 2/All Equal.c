#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(a==b && b==a && a==c) {
		printf("true");}
	else
		{printf("false");}
	return 0;
}	

