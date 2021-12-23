#include<stdio.h>
#include<stdlib.h>

// a+i <=> &a[0+i]
//*(a+i) <=> a[i]

void nhap(int *a, int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d", a+i);
	}	
}	

void xuat(int *a, int n){
	int i;
	printf("In xuoi:\n");
	for(i=0;i<n;i++){
		printf("%d ", *(a+i));
	}	
	printf("\n");
	printf("In nguoc:\n");
	for(i=n-1;i>=0;i--){
		printf("%d ", *(a+i));
	}	
}	

int main(){
	int *a = NULL;
	int n;
	do{
		printf("Nhap so luong phan tu:\n");
		scanf("%d", &n);
		if(n<0){
			printf("So luong phan tu phai >=0!\n");
		}	
	}while(n<0);
	 a = (int*)malloc(n*sizeof(int));
	 printf("Nhap phan tu:\n");
	nhap(a,n);
	xuat(a,n);
	if(a!=NULL){
		free(a);
	}	
	return 0;
}	
