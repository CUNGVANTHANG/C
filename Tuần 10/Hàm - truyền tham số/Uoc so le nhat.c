#include<stdio.h>

void nhap(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}

int uoc(int x){
    int i, b[100];
    for(i=x-1;i>=1;i--){
        if(x%i==0 && i%2!=0){
            return i;
        }
    }
    
}

void uocmang(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\n", uoc(a[i]));
    }
}

int main(){
    int n, a[100];
    scanf("%d", &n);
    nhap(a,n);
    uocmang(a,n);
    
    
    
}
