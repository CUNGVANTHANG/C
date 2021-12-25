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

int sapXep(int a[], int n){
    int i, j;
    for(i=0;i<n;i=i+2){
        for(j=i+2;j<n;j=j+2){
            if(a[i]<a[j] ){
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
    int i, n, a[100];
    scanf("%d", &n);
    nhap(a,n);
    sapXep(a,n);
    
    
}

