#include<stdio.h>
#include<math.h>

int main(){
	float a, b, c, t, P, S;
	printf("Nhap ba canh cua tam giac :");
	scanf("%f %f %f", &a, &b, &c);
	P = a + b + c;
	t = (a+b+c)/2;
	S = sqrt(t*(t-a)*(t-b)*(t-c));
	printf("Chu vi cua tam giac = %f\n", P);
	printf("Dien tich cua tam giac = %f", S);
	
}	
