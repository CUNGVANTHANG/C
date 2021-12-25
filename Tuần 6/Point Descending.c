#include<stdio.h>

double nhap(double a[], int n){
    int i;
    for(i=1;i<=n;i++){
        scanf("%lf", &a[i]);
    }
}

double hienThi(double a[], int n){
    int i;
    for(i=1;i<=n;i++){
        printf("%.2lf ", a[i]);
    }
}

double sapXep(double a[], int n){
    int i, j;
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(a[i]<a[j]){
                double tmp;
                tmp = a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    hienThi(a,n);
    
}

int main(){
    double a[100];
    int n;
    scanf("%d", &n);
    nhap(a,n);
    sapXep(a,n);
}
