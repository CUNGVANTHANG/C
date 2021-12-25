#include<stdio.h>

int nhap(int a[], int n){
    int i;
    for(i=1;i<=n;i++){
        scanf("%d", &a[i]);
    }
}

int hienThi(int a[], int n){
    int i;
    for(i=1;i<=n;i++){
        printf("%d ", a[i]);
    }
}

int sapXep(int a[], int n){
    int i, j;
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(a[i]>a[j] && a[i]%2!=0 && a[j]%2!=0){
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

