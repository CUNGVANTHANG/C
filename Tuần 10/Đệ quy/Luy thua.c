#include<stdio.h>

long long tong(int a, int b){
    if(b==0) return 1;
    return a*tong(a, b-1);
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%lld", tong(a,b));
}
