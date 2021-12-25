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
        for(j=0;j<n;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void gt(int a[][100], int m, int n, int vth, int vtc, int x){
    int i, j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            a[vth-1][vtc-1]=x;
        }
    }
   xuat(a,m,n);
}

int main(){
    int a[100][100];
    int m, n;
    scanf("%d %d", &m, &n);
    nhap(a,m,n);
    int vth, vtc, x;
    scanf("%d %d %d", &vth, &vtc, &x);
    gt(a,m,n,vth,vtc,x);
    
}
