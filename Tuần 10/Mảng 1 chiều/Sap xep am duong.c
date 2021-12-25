#include<stdio.h>

int nhap(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}

int xuat(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }
}

int hoanVi(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}	

int sapXep(int a[], int n){
    int i, j;
    for(i=0;i<n;i++){
    	for(j=i+1;j<n;j++){
    		if(a[i]>0 && a[j]>0 && a[i]>a[j]){
    			hoanVi(a[i], a[j]);
    		}	
    		else if(a[i]<0 && a[j]<0 && a[i]<a[j]){
    			hoanVi(a[i], a[j]);
    		}	
    	}	
    }
}

int main(){
    int i, n, a[100];
    scanf("%d", &n);
    nhap(a,n);
    sapXep(a,n);
    xuat(a,n);
    
}

