#include<stdio.h>
#include<stdbool.h>
#include<math.h>

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

bool cp(int x){
    if(x<1)
        return false;
    int i = sqrt(x);
    if(i*i==x)
        return true;
    return false;
}    

void kt(int a[][100], int m, int n){
	int i, j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(cp(a[i][j])==true){
				printf("%d ", a[i][j]);
			}	
		}	
	}	
}
	
void sapxeptang(int a[][100], int m, int n){
	int i, j, k, h;
	int b[100];
	for(i=0;i<m*n;i++){
		b[i]=a[i/n][i%n];
	}	
	for(i=0;i<m*n;i++){
		for(j=i+i;j<m*n;j++){
			if(b[i]>b[j]){
				int tmp = b[i];
				b[i]=b[j];
				b[j]=tmp;
			}	
		}	
	}
	for(i=0;i<m*n;i++){
		a[i/n][i%n]=b[i];
	}	
		
}	

void sapxepgiam(int a[][100], int m, int n){
	int i, j, k, h;
	int b[100];
	for(i=0;i<m*n;i++){
		b[i]=a[i/n][i%n];
	}	
	for(i=0;i<m*n;i++){
		for(j=i+i;j<m*n;j++){
			if(b[i]<b[j]){
				int tmp = b[i];
				b[i]=b[j];
				b[j]=tmp;
			}	
		}	
	}
	for(i=0;i<m*n;i++){
		a[i/n][i%n]=b[i];
	}	
		
}	

	
	

int max(int a[][100], int m, int n){
	int i, j;
	int max = a[0][0];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(max<a[i][j]){
				max = a[i][j];
			}	
		}	
	}	
	return max;
}	

int min(int a[][100], int m, int n){
	int i, j;
	int min = a[0][0];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(min>a[i][j]){
				min = a[i][j];
			}	
		}	
	}	
	return min;
}	

	

int main(){
	int m, n, a[100][100];
	printf("Nhap so hang m = ");
	scanf("%d", &m);
	printf("\nNhap so cot n = ");
	scanf("%d", &n);
	printf("Nhap mang:\n");
	nhap(a,m,n);
	printf("Xuat mang:\n");
	xuat(a,m,n);
	printf("\nSo chinh phuong:\n");
	kt(a,m,n);
	printf("\n");
	printf("Phan tu max = %d\n", max(a,m,n));
	printf("Phan tu min = %d\n", min(a,m,n));
	printf("Sap xep tang dan ma tran:\n");
    sapxeptang(a,m,n);
    xuat(a,m,n);
    printf("\n");
    printf("Sap xep giam dan ma tran:\n");
    sapxepgiam(a,m,n);
    xuat(a,m,n);
}
	
	
