#include<stdio.h>
#include<string.h>

void xoaxuongdong(char x[]){
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}	
}	

int kiemtra(char x[]){
	// 1 doi xung
	// 0 khong doi xung
	size_t len = strlen(x);
	int i;
	for(i=0;i<len/2;i++){
		if(x[i]!=x[len-i-1]){
			return 0;
		}	
	}	
	return 1;
}

int sktgiong(char x[]){
	size_t len = strlen(x);
	int i, S= 0;
    for(i=0;i<len/2;i++){
		if(x[i]==x[len-i-1]){
			S = S + 1;
		}	
	}
	return S;	
}	

int main(){
	char s[100];
	printf("Nhap s = ");
	fgets(s, sizeof(s), stdin);
	xoaxuongdong(s);
	if(kiemtra(s)){
		printf("Day la chuoi doi xung\n");
		printf("So ki tu giong nhau: %d", sktgiong(s));
	}	
	else{
		printf("Day khong la chuoi doi xung");
	}
}	
