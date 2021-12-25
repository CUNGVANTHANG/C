#include<stdio.h>

void nhap(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}	
	
}	

void xuat(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ", a[i]);
	}	
}	

void search(int a[], int n, int x){
	int i, count =0;
	for(i=0;i<n;i++){
		if(a[i]==x){
			count = count + 1;
		}	
	}
	printf("So x xuat hien %d lan trong day", count);	
}	

void sapxep(int a[], int n){
	int i, j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int tmp = a[i];
				a[i]=a[j];
				a[j]=tmp;
			}	
		}	
	}	
	
}

int main(){
	int a[100];
	int n, x;
	printf("Nhap day so\n");
	printf("So phan tu n = ");
	scanf("%d", &n);
	nhap(a,n);
	printf("\nDay so vua nhap: ");
	xuat(a,n);
	printf("\nNhap x = ");
	scanf("%d", &x);
	search(a,n,x);
	printf("\nDay so sau khi sap xep: \n");
    sapxep(a,n);
    xuat(a,n);
	
}	
