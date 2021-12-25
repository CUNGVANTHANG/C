#include<stdio.h>

int hieu(int n){
    if(n==0 || n==1) return 1;
    if(n==2) return 2;
    return 3*hieu(n-1) - hieu(n-2);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", hieu(n));
}
