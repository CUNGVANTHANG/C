#include<stdio.h>

double nhap(double a[], int n){
    int i;
    for(i=1;i<=n+1;i++){
        scanf("%lf", &a[i]);
    }
}

double hienThi(double a[], int n){
    int i;
    for(i=1;i<=n+1;i++){
        printf("%.2lf ", a[i]);
    }
}

double sapXep(double a[], int n){
    int i, j;
    for(i=1;i<=n+1;i++){
        for(j=i+1;j<=n+1;j++){
            if(a[i]>a[j]){
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
    double a[200];
    int n;
    scanf("%d", &n);
    nhap(a,n);
    sapXep(a,n);
}
