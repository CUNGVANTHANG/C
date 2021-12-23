#include<stdio.h>

int main(){
	char ch = 'A';
	char str[20] = "uet.vnu.edu.vn";
	float flt = 10.234;
	int songuyen = 150;
	double dbl = 20.123456;
	printf("Ki tu la %c \n", ch);
	printf("Xau la %s \n", str);
	printf("So dau phay dong la %f \n", flt);
	printf("Gia tri nguyen la %d\n", songuyen);
	printf("Gia tri thuc la %lf \n", dbl);
	printf("Gia tri he 8 la %o \n", songuyen);
	printf("Gia tri he 16 la %x \n", songuyen);
	return 0;
}
