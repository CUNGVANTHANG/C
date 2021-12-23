#include<stdio.h>

int main(){
	float a1, b1, c1, a2, b2, c2;
	printf("Nhap a1, b1, c1: ");
	scanf("%f %f %f", &a1, &b1, &c1);
	printf("Nhap a2, b2, c2: ");
	scanf("%f %f %f", &a2, &b2, &c2);
	float D, Dx, Dy;
	D = a1*b2 - a2*b1;
	Dx = c1*b2 - c2*b1;
	Dy = a1*c2 - a2*c1;
		 if(D!=0){
		 	float x = Dx/D;
		 	float y = Dy/D;
		 	printf("He co nghiem duy nhat x = %.2f, y = %.2f", x, y);
		 }	
		 if(D==0){
		 	if(Dx!=0 || Dy!=0){
		 		printf("He vo nghiem");
		 	}
		 	else if(Dx==0 && Dy==0){
		 		printf("He vo so nghiem");
		 	}	
		 }	
		
}	
