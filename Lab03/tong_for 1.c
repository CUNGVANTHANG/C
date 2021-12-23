#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i;
	int S = 0;
	for(i=0;i<n;i = i+2){
		S = S + i;
	}	
	printf("Tong cac so nguyen duong chan S = %d", S);
}	

/*
#include<stdio.h>

int main(){
	int n;
	int S = 0;
	scanf("%d", &n);
	int i =0;
	while(i<=n){
		if(i%2==0){
	 	    S = S + i;  
		}
		i++;	
	}
	  printf("Tong cac so nguyen duong chan S = %d", S);	
}	
*/
