#include<stdio.h>

void nhap(int a[][100], int m, int n){
	int i, j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}	
	}	
}

void xuat(int a[][100], int m, int n){
	int i, j;
	for(i=0;i<m;i++){
		for(j=0;j<=n;j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");	
	}	
}

void chen(int a[][100], int m, int n, int vt, int x){
    int i, j;
    for(i=0;i<m;i++){
        for(j=n-1;j>=vt-1;j--){
            a[i][j+1]=a[i][j];
        }
        a[i][vt-1]= x;
    }
}

int main(){
    int a[100][100];
    int m, n;
    scanf("%d %d", &m, &n);
    nhap(a,m,n);
    int vt, x;
    scanf("%d %d", &vt, &x);
    chen(a,m,n,vt,x);
    xuat(a,m,n);
}
