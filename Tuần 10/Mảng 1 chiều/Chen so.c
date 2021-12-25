#include<stdio.h>

int nhap(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	
}	


int chen(int a[], int n){
	int i, k, x;
	scanf("%d %d", &x, &k);
	for(i=n-1;i>=k-1;i--){	
	       a[i+1]=a[i];
    }
       a[k-1]=x;
			
    
}	


void hienThi(int a[], int n){
	int i, k;
	for(i=0;i<=n;i++){
		printf("%d ", a[i]);
	}	
	
}

int main(){
	int a[100];
	int n, x, k;
	scanf("%d", &n);
	nhap(a,n);
    chen(a,n);
    hienThi(a,n);
}

	
	
	
	
