#include<stdio.h>

void nhap(int a[], int n){
	int i;
	printf("Nhap mang:\n");
	for(i=1;i<=n;i++){
		scanf("%d", &a[i]);
		
	}	
}	

void chiSo(int a[], int n, int x){
	int i;
	printf("Phan tu lon hon x:\n");
	for(i=1;i<=n;i++){
		if(a[i]>x){
			printf("So %d o vi tri %d trong mang\n", a[i], i);
		}	
	}	
}

int main(){
	int a[100];
	int n, x;
	printf("Nhap n = ");
	scanf("%d", &n);
	nhap(a,n);
	printf("Nhap x = ");
	scanf("%d", &x);
	chiSo(a,n,x);
	
}	
