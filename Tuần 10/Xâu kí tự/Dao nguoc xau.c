#include<stdio.h>
#include<string.h>

int main(){
	char s[100], *p;
	p = s;
	scanf("%s", &s);
	int len = strlen(s);
	int i;
	for(i=len-1;i>=0;i--){
		printf("%c", *(p+i));
	}	
}	
