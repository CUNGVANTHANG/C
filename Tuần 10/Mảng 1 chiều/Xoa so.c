#include<stdio.h>

int nhap(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	
}	


int xoa(int a[], int n){
	int i, k;
	scanf("%d", &k);
	for(i=k-1;i<n;i++){	
	       a[i]=a[i+1];
    }
      
			
    
}	


void hienThi(int a[], int n){
	int i, k;
	for(i=0;i<n-1;i++){
		printf("%d ", a[i]);
	}	
	
}

int main(){
	int a[100];
	int n, x, k;
	scanf("%d", &n);
	nhap(a,n);
    xoa(a,n);
    hienThi(a,n);
}

	
	
	
	
