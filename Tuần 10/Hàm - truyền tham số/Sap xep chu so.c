#include<stdio.h>
#include<string.h>

void sapxep(char a[]){
	int i, j;
	for(i=0;i<strlen(a);i++){
		for(j=i+1;j<strlen(a);j++){
			if(a[i]>a[j]){
				char temp = a[i];
				a[i]=a[j];
				a[j]= temp;
			}	
		}	
	}	
	printf("%s\n", a);
}

int main(){
	int n;
	scanf("%d", &n);
	char a[100][100];
	int i;
	for(i=0;i<n;i++){
		scanf("%s", &a[i]);
	}	
	for(i=0;i<n;i++){
		sapxep(a[i]);
	}		
	
}	


