#include<stdio.h>

int main(){
	float A, B;
	printf("Phuong trinh bac nhat co dang Ax + B = 0");
	printf("\nNhap A = ");
	scanf("%f", &A);
	printf("\nNhap B = ");
	scanf("%f", &B);
	float x= -B/A;
	if(A==0 && B!=0){
		printf("\nPhuong trinh vo nghiem");
	}
	else if(A==0 && B==0){
		printf("\nPhuong trinh vo so nghiem");
	}
	else if(A!=0 && B!=0 || A!=0 && B==0){
		printf("\nPhuong trinh co nghiem x = %f", x);
	}
	
}	
