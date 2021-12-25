#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void xoaxuongdong(char x[]){
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}	
}	

int main(){
    char s[100];
    fgets(s,100,stdin);
    xoaxuongdong(s);
    int n = strlen(s);
    int i;
    for(i=n-1;i>=0;i--){
        if(s[i]==' '){
            int printCh = i+1;
            while(s[printCh]!=' ' && printCh < n){
                printf("%c", s[printCh++]);
            }
            printf(" ");
        }
    }
    for(i=0;s[i]!=' ';i++){
        printf("%c", s[i]);
    }
}
