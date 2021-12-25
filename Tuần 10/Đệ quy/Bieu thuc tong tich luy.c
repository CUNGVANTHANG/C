#include<stdio.h>

int tong(int n){
    if(n==1) return 1;
    return n + tong(n-1);
}

int kt(int n){
    if(n==1) return 1;
    int S = tong(n);
    return S + kt(n-1);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", kt(n));
}
