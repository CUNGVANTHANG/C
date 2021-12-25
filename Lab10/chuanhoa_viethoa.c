#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* kituviethoa(char *a){
	int len = strlen(a);
	int i;
	if(a[0]!=32){
		if (a[0] >96 && a[0]< 123)
        {
             a[0] = a[0]-32;
        }
	}	
	for(i=0;i<len;i++){
		if(a[i]==32){
			if(a[i+1]>=97 && a[i+1]<=122){
				a[i+1]= a[i+1]-32;
			}	
		}	
	}
	return a;	
}

int main(){
	char chuoi[100];
	gets(chuoi);
	char *a = kituviethoa(chuoi);
	printf("%s", a);
	return 0;
}	
