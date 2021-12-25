#include<stdio.h>

void nhap(int a[][100], int m, int n){
	int i, j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}	
	}	
}

void xoacot(int a[][100], int m, int n, int vt){
    int i, j;
    for(i=0;i<m;i++){
        for(j=vt-1;j<n;j++){
            a[i][j]=a[i][j+1];
        }
    }
}

void xuat(int a[][100], int m, int n){
    int i, j;
    for(i=0;i<m;i++){
        for(j=0;j<n-1;j++){
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
    xoacot(a,m,n,vt);
    xuat(a,m,n);
}
