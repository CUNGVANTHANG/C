#include<stdio.h>

int tong(int n){
    if(n==0) return 1;
    int x = 2*n+1;
    return  x + tong(n-1);
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", tong(n));
}
