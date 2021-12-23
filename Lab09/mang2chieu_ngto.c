#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int x){
	if(x<2){
		return false;
	}	
	int i;
	for(i=2;i<=sqrt(x);i++){
		if(x%i==0){
			return false;
        }  
		 
	}
	return true; 	
}

void kt(int a[][100], int m, int n){
	int i, j, sopt = 0;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(isPrime(a[i][j])==true){
				printf("%d ", a[i][j]);
				sopt++;
			}
			
		}	
	}	
	if(sopt==0){
		printf("\nKhong co so nguyen to trong mang");
	}	
}	

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

int max(int a[][100], int m, int n){
	int i, j;
	int max = a[0][0];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(max<a[i][j] && isPrime(a[i][j])==true){
				max = a[i][j];
			}	
		}	
	}	
	return max;
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
	printf("Cac so nguyen to trong mang:\n");
	kt(a,m,n);
	printf("\nGia tri so nguyen to lon nhat: %d", max(a,m,n));
}	

