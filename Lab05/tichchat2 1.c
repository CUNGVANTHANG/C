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


void chen(int a[], int n, int vt, int x){
	int i;
	for(i=n-1;i>=vt-1;i--){
		a[i+1]=a[i];
	}	
	a[vt-1]=x;
    for(i=0;i<=n;i++){
        printf("%d ", a[i]);
    }	
	
}

int timpt(int a[], int n, int k){
	int i, count = 0, vt;
	for(i=0;i<n;i++){
		if(a[i]==k){
			vt = i;
			break;
		}	
	}
	return vt;	
}	

void xoa(int a[], int n, int k){
	int vt = timpt(a,n,k);
	int i;
	for(i=vt;i<n;i++){
		a[i]=a[i+1];
	}
	for(i=0;i<n-1;i++){
		printf("%d ", a[i]);
	}	
}

int main(){
	int a[100];
	int i, n, x, vt;
	printf("Nhap vao mot day so\n");
	printf("Nhap n = ");
	scanf("%d", &n);
	printf("\nNhap mang: ");
	nhap(a,n);
	printf("\nMang ban dau: ");
	xuat(a,n);
	printf("\nNhap vi tri va x muon chen:\n");
	scanf("%d %d", &vt, &x);
	printf("\nMang sau khi chen:");
    chen(a,n,vt,x);
    printf("\n\n\n\n");

	
	printf("\nNhap mang: ");
	nhap(a,n);
	printf("\nMang ban dau: ");
	xuat(a,n);
	int k;
	printf("\nNhap phan tu muon xoa: ");
	scanf("%d", &k);
	

	printf("\nMang sau khi xoa 1 phan tu: ");
	
    xoa(a,n,k);
	
}	
