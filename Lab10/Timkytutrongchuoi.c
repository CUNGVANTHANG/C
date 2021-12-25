#include<stdio.h>
#include<string.h>

void xoaxuongdong(char x[]){
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}	
}	

void timkiem(char x[], char a[]){
	size_t len = strlen(x);
	int i, S=0;
	for(i=0;i<len;i++){
		if(x[i]==a[0]){
			S = S + 1;
		}	
	}	
	if(S==0){
		printf("Khong tim kiem thay ki tu");
	}	
	else{
		printf("Ki tu %s xuat hien %d", a, S);
	}
}	

int main(){
	char s[100], a[100];
	printf("Nhap s = ");
    gets(s);
	printf("Nhap ki tu can tim = ");
	gets(a);
    timkiem(s,a);
}
	
