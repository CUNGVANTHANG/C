#include<stdio.h>
#include<conio.h>

int main(){
	char ch;
	char str[100];
	printf("Nhap 1 ki tu bat ki:\n");
	scanf("%c", &ch);
	printf("Ki tu vua nhap la %c \n", ch);
	printf("Nhap 1 xau bat ki ( co the len toi 100 ki tu ):\n)");
	scanf("%s", &str);
	printf("Xau vua nhap la %s \n", str);
	getch();
	return 0;
}	
