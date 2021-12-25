#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char a[100];
	scanf("%s", &a);
	int i;
	int max = a[0]-48;
	for(i=1;i<strlen(a);i++){
	    if(a[i]>=48 && a[i]<=57){
	    	if(a[i]-48>max){
	    		max = a[i]-48;
	    	}	
	    }	
	}	
	printf("%d", max);

}	
