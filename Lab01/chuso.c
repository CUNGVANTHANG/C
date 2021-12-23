#include<stdio.h>
#include<math.h>

int main(){
	int a, x, y, z;
	printf("Nhap so nguyen co 3 chu so :");
	scanf("%d", &a);
	x = a%10;
	a = a/10;
	y = a%10;
	a = a/10;
	z = a%10;
	a = a/10;
	printf("Hang tram %d , chuc %d, don vi %d", z, y, x);
}	
