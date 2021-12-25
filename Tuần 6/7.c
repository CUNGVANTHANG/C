#include<stdio.h>

int nhap(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}	
}	

int main(){
	int a[100];
	int i, n, count = 0, S = 0;
	scanf("%d", &n);
	nhap(a,n);
	for(i=n;i>=0;i--){
		if(a[i]==7){
			printf("%d ", i);
		
		}
		else if(a[i]!=7){
			count = count + 1;
		}
		
	}	
	for(i=n;i>=0;i--){
		S = S + 1;
	}	
	if(count == S){
		printf("Not found");
	}	
			
}	
