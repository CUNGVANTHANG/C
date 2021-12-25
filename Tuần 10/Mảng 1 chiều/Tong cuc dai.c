#include<stdio.h>

void nhap(int a[], int n){
    int i;
    for(i=1;i<=n;i++){
        scanf("%d", &a[i]);
    }
}

void Smax(int a[], int n){
    int i, S= 0;
    for(i=1;i<=n;i++){
        if(a[i]<a[i+1]&& a[i+2]<a[i+1]){
            S = S + a[i+1];
        }
    }
    printf("%d", S);
}

int main(){
    int a[100];
    int n;
    scanf("%d", &n);
    nhap(a,n);
    Smax(a,n);
}
