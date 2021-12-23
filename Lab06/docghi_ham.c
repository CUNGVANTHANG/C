#include<stdio.h>
#include<stdlib.h>

void nhap(int *a, int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d", a+i);
	}	
}	
void xuat(int *a, int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ", *(a+i));
	}	
}	
int main(){
	int *a = NULL;
	int n;
	do{
		printf("Nhap so phan tu n\n");
		scanf("%d", &n);
		if(n<0){
			printf("Nhap so phan tu n>=0\n");
		}	
	}while(n<0);
	a = (int*) malloc(n*sizeof(int));
	printf("Nhap phan tu:\n");
	nhap(a,n);
	printf("Xuat phan tu:\n");
	xuat(a,n);
	if(a!=NULL){
		free(a);
	}
	return 0;	
}	
