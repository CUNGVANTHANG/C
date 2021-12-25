#include<stdio.h>
#include<math.h>

int tong(int n){
    if(n==1) return 1;
    return pow(n,n)+tong(n-1);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", tong(n));
}
