#include<stdio.h>
#include<math.h>

float tong(float n){
    if(n==1) return 1;
    return n+ tong(n-1);
}

float kt(float n){
    if(n==1) return 1;
    float S = 1/ tong(n);
    return S + kt(n-1);
}

int main(){
    float n;
    scanf("%f", &n);
    printf("%.2f", kt(n));
}
