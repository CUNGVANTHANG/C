#include<stdio.h>
#include<stdlib.h>

void nhap(int *a, int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d", a+i);
	}
}   		

void countEven(int *a, int n){
	int i, count = 0;
	for(i=0;i<n;i++){
		if(*(a+i)%2==0){
			count = count + 1;
		}	
	}
	printf("%d", count);	
}	

void TongEven(int *a, int n){
	int i, S=0;
	for(i=0;i<n;i++){
		if(*(a+i)%2==0){
			S = S + *(a+i);
		}	
	}	
	printf("%d", S);
}	

void InChan(int *a, int n){
	int i, count = 0;
	for(i=0;i<n;i++){
		if(*(a+i)%2==0){
			printf("%d ", *(a+i));
		}	
	}
}	

int main(){
	int *a = NULL;
	int n;
	do{
		printf("Nhap n:\n");
		scanf("%d", &n);
		if(n<0)
		printf("Hay nhap n>=0!\n");
	}while(n<0);
	a = (int*)malloc(n*sizeof(int));
	printf("Nhap phan tu:\n");
	nhap(a,n);
	printf("So phan tu chan:\n");
	countEven(a,n);
	printf("\nTong cac phan tu chan:\n");
	TongEven(a,n);
	printf("\nCac phan tu chan:\n");
	InChan(a,n);
	if(a!=NULL){
		free(a);
	}	
	return 0;	
}	
