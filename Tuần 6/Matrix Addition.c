#include<stdio.h>

void nhapA(double a[50][50], int n, int m){
	int i, j;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			scanf("%lf", &a[i][j]);
		}	
	}	
	}

void nhapB(double b[50][50], int n, int m){
	int i, j;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			scanf("%lf", &b[i][j]);
		}	
	}	
	}

void tong(double a[50][50], double b[50][50], double c[50][50], int n, int m){
	int i, j;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			c[i][j] = a[i][j]+b[i][j];
		}	
	}	
}

void hienThi(double c[50][50], int n, int m){
	int i, j;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			printf("%.2lf ", c[i][j]);
		}
		printf("\n");	
	}	
	
}	

int main(){
    double a[50][50];
    double b[50][50];
    double c[50][50];
    int n, m;
    scanf("%d %d", &n, &m);
    nhapA(a,n,m);
    nhapB(b,n,m); 
    tong(a,b,c,n, m);
    hienThi(c,n,m);
    
}    
