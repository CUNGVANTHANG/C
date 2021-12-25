#include<stdio.h>

void nhap(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}

void hienThi(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }
}

int sapXep(int a[], int n){
    int i, j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
                int tmp;
                tmp = a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    hienThi(a,n);
}

int main(){
    int i;
	int n;
	int a[100];
    scanf("%d", &n);
    nhap(a,n);
    sapXep(a,n);
    
    
}
