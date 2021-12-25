#include<stdio.h>

void nhap(int a[], int n){
    int i;
    for(i=1;i<=n;i++){
        scanf("%d", &a[i]);
    }
}

void tong(int a[], int n){
    int i, count = 0;
    for(i=1;i<=n;i++){
        count = count + a[i];
        printf("%d ", count);
    }
}

int main(){
    int a[100];
    int n;
    scanf("%d", &n);
    nhap(a,n);
    tong(a,n);
}
