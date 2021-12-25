#include<stdio.h>

int gt(int n){
    if(n==1) return 1;
    return n*gt(n-1);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", gt(n));
}



