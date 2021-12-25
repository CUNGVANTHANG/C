#include<stdio.h>

int nhapA(int a[], int n){
	int i;
	for(i=1;i<=n;i++){
		scanf("%d", &a[i]);
	}	
}	

int nhapB(int b[], int n){
	int i;
	for(i=1;i<=n;i++){
		scanf("%d", &b[i]);
	}	
}


int danXen(int a[], int b[], int c[], int n){
	int i;
	for(i=1;i<=2*n;i++){
		if(i%2==0){
			c[i]=b[i/2];
		}	
		else if(i%2!=0){
			c[i]=a[(i+1)/2];
		}	
	}	
}

int hienThi(int c[], int n){
	int i;
	for(i=1;i<=2*n;i++){
		printf("%d ", c[i]);
	}	
}

int main(){
	int n, a[100], b[100], c[100];
	int i;
	scanf("%d", &n);
	nhapA(a,n);
	nhapB(b,n);
	danXen(a,b,c,n);
	hienThi(c,n);

	
}	
