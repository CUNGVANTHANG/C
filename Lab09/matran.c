#include<stdio.h>
#include<stdbool.h>
#include<math.h>

void nhap(int a[][100], int x, int y){
	int i, j;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			scanf("%d", &a[i][j]);
		}	
	}	
}

void xuat(int a[][100], int x, int y){
	int i, j;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");	
	}	
}

int tongpt(int a[][100], int x, int y){
	int i, j, S =0;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			S = S + a[i][j];
		}	
	}
	return S;	
}	

void tich(int a[][100], int m, int n, int b[][100], int p, int q, int c[][100]){
	int i, j, k;
	if(n!=p){
		printf("invalid");
	}	
	else{
		for(i=0;i<m;i++){
			for(j=0;j<q;j++){
				for(k=0;k<n;k++){
					c[i][j]+= a[i][k]*b[k][j];
		      	}	
	     	}	
	    }
	    xuat(c,m,q);
	    
	} 
	
}	

void pt(int a[][100], int x, int y){
	 int i, j;
	 if(x!=y){
	 	printf("invalid");
	 }	
	 else{
	 	for(i=0;i<x;i++){
	 			printf("%d ", a[i][i]);	
	 	}	
	 }
}	
	
	

int main(){
	int m, n, p, q, a[100][100], b[100][100], c[100][100];
	printf("Nhap so hang m = ");
	scanf("%d", &m);
	printf("\nNhap so cot n = ");
	scanf("%d", &n);
	printf("Nhap ma tran 1:\n");
	nhap(a,m,n);
    printf("\n");
    
    printf("Nhap so hang p = ");
	scanf("%d", &p);
	printf("\nNhap so cot q = ");
	scanf("%d", &q);
	printf("Nhap ma tran 2:\n");
	nhap(b,p,q);
	
	printf("\n");
	printf("Xuat ma tran 1:\n");
	xuat(a,m,n);
	printf("\n");
	printf("Xuat ma tran 2:\n");
	xuat(b,p,q);
	printf("\n");
	
	printf("Tong phan tu ma tran 1 S1 = %d\n", tongpt(a,m,n));
	printf("Tong phan tu ma tran 2 S2 = %d\n", tongpt(b,p,q));
	printf("\n");
	
	printf("Tich hai ma tran 1 va 2: \n");
	tich(a,m,n,b,p,q,c);
	printf("\n");
	
	printf("Phan tu tren duong cheo chinh cua ma tran 1: \n");
	pt(a,m,n);
	printf("\nPhan tu tren duong cheo chinh cua ma tran 2: \n");
	pt(b,p,q);
	
} 
