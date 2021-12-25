#include<stdio.h>
#include<math.h>

int main(){
	float A, B, C;
	printf("Phuong trinh Ax^2+Bx+C=0");
	printf("\nNhap A = ");
	scanf("%f", &A);
	printf("\nNhap B = ");
	scanf("%f", &B);
	printf("\nNhap C = ");
	scanf("%f", &C);
	
	float *a; a = &A;
	float *b; b = &B;
	float *c; c = &C;
	if(*a!=0){
		float denta = B*B - 4*A*C;
		if(denta<0){
			printf("\nPhuong trinh vo nghiem");
		}	
		if(denta==0){
			float nghiem = -B/(2*A);
			float *no; no = &nghiem;
			printf("\nPhuong trinh co nghiem %.2f", *no);
		}	
		if(denta>0){
			float nghiem1 = (-B+sqrt(denta))/2*A;
			float nghiem2 = (-B-sqrt(denta))/2*A;
			float *no1; no1 = &nghiem1;
			float *no2; no2 = &nghiem2;
			printf("\nPhuong trinh co nghiem %.2f %.2f", *no1, *no2);
		}	
	}
	else{
		float nghiem = -C/B;
		float *no; no = &nghiem;
		printf("\nPhuong trinh co nghiem %.2f", *no);
	}	
	
}	
