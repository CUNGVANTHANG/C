#include<stdio.h>
#include<math.h>

int main(){
	float r, P, S;
	printf("Nhap ban kinh = ");
	scanf("%f", &r);
	P = r*2*(M_PI);
	S = r*r*(M_PI);
	printf("Chu vi hinh tron = %f\n", P);
    printf("Dien tich hinh tron = %f", S); 
}    
