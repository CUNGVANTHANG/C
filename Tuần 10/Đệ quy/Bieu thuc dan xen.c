#include<stdio.h>
#include<math.h>

int xen(int n){
    if(n==1) return 1;
    return n*pow(-1,n+1) + xen(n-1) ;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", xen(n));
}
