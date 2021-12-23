#include<stdio.h>
#include<stdlib.h>

void nhap(int *a, int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d", a+i);
	}	
}

void xuat(int *a, int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ", *(a+i));
	}	
}

void sapxep(int *c, int p){
	int i, j;
	for(i=0;i<p;i++){
		for(j=i+1;j<p;j++){
			if(*(c+i)>*(c+j)){
				int tmp = *(c+i);
				*(c+i)=*(c+j);
				*(c+j)=tmp;
			}	
		}	
	}	
}

void tronsapxep(int *a, int m, int *b, int n, int *c, int p){
	int i = 0, j =0, k =0;
	while(i<m || j<n){
		if(i<m && j<n){
			if(*(a+i)<*(b+j)){
				*(c+k) = *(a+i);
				k++;i++;
			}
			else{
				*(c+k)=*(b+j);
				k++;j++;
			}	
		}else{
			if(i<m && j>=n){
				*(c+k)=*(a+i);
				k++;i++;
			}	
			else if(j<n && i>=m){
				*(c+k)=*(b+j);
				k++;j++;
			}	
		}	
	}	
     
}		

void tron(int *a, int m, int *b, int n, int *c, int p){
	int i;
	p = m+n;
	for(i=0;i<p;i++){
		if(i<m){
			*(c+i)= *(a+i);
		}	
		else{
			*(c+i)=*(b+i-m);
		}
	}	
	
}

int main(){
	int m, n, p;
	//Nhap so phan tu A:
	do{
		printf("Nhap m:\n");
		scanf("%d", &m);
		if(m<0){
			printf("Hay nhap m>=0:\n");
		}	
	}while(m<0);
	//Nhap so phan tu B:
	do{
		printf("\nNhap n:\n");
		scanf("%d", &n);
		if(n<0){
			printf("Hay nhap n>=0:\n");
		}	
	}while(n<0);
	p = m+n;
	//Nhap phan tu A:
	int *a =(int*) malloc(m*sizeof(int));
	printf("\nNhap phan tu A:\n");
	nhap(a,m);
	
	//Nhap phan tu B:
	int *b =(int*) malloc(n*sizeof(int));
	printf("\nNhap phan tu B:\n");
	nhap(b,n);
	
	int *c = (int*) malloc(p*sizeof(int));
	printf("\n");
	printf("cau a:\n");
	tronsapxep(a,m,b,n,c,p);
	xuat(c,p);
	printf("\ncau b:\n");
    tron(a,m,b,n,c,p);
	sapxep(c,p);
	xuat(c,p);
	
    free(a);
    free(b);
	free(c);
	return 0;
}	
	
