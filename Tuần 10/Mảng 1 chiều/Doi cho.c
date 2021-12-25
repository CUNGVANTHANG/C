#include<stdio.h>

#include<stdio.h>

int nhap(int a[], int n){
	int i;
	for(i=1;i<=n;i++){
		scanf("%d", &a[i]);
	}	
}	

int hienThi(int a[], int n){
	int i;
	for(i=1;i<=n;i++){
		printf("%d ", a[i]);
	}	
	
}	

int main(){
	int a[100];
	int n, i, x, y;
	scanf("%d", &n);
	nhap(a,n);
	scanf("%d %d", &x, &y);
   	for(i=1;i<=n;i++){
		int tmp;
		tmp = a[x];
		a[x]= a[y];
		a[y]=tmp;
		 	for(i=1;i<=n;i++){
		printf("%d ", a[i]);
	}
	}

}	
	
	
	
