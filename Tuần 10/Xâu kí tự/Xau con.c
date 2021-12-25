#include<stdio.h>
#include<string.h>

void xoaxuongdong(char x[]){
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}	
}	

int main(){
    char a[100];
    char b[100];
    fgets(a,100,stdin);xoaxuongdong(a);
    fgets(b,100,stdin);xoaxuongdong(b);
    char *kq = strstr(b, a);
    if(kq!=NULL){
    	printf("YES");
    }	
    else{
    	printf("NO");
	}
    
}	
