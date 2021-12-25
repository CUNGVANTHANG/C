#include<stdio.h>

int tong(int n){
    if(n==2) return 4;
    if(n==1 || n==0) return 1;
    return 2*tong(n-1)+ tong(n-2)+ 1;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", tong(n));
    
}
