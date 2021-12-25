#include<stdio.h>

int nhap(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}	
}	

int hienThi(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ", a[i]);
	}	
	
}	

int soAm(int a[], int n){
	int i, count = 0;
	for(i=0;i<n;i++){
		if(a[i]<0){
		   count = count + 1;
		}   
	}
	  printf("%d ", count);	
}



int soDuong(int a[], int n){
	int i,count = 0;
		for(i=0;i<n;i++){
			if(a[i]>0){
				count = count +1;
			}	
		}
	  printf("%d ", count);
}

int so0(int a[], int n){
    int i, count = 0;
    for(i=0;i<n;i++){
        if(a[i]==0){
            count = count + 1;
        }
    }
     printf("%d", count);
}

int main(){
	int a[20];
	int  i, n;
	scanf("%d", &n);
	nhap(a,n);
    soAm(a,n);
    soDuong(a,n);
    so0(a,n);

	
	
	
}	
