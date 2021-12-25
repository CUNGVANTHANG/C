#include<stdio.h>

void nhap(int a[][100], int m, int n){
	int i, j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}	
	}	
}

void xoahang(int a[][100], int m, int n, int vt){
    int i, j;
    for(j=0;j<n;j++){
        for(i=vt-1;i<m;i++){
            a[i][j]=a[i+1][j];
        }
    }
}

void xuat(int a[][100], int m, int n){
    int i, j;
    for(i=0;i<m-1;i++){
        for(j=0;j<n;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int a[100][100];
    int m, n, vt;
    scanf("%d %d", &m, &n);
    nhap(a,m,n);
    scanf("%d", &vt);
    xoahang(a,m,n,vt);
    xuat(a,m,n);
}
