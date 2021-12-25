#include<stdio.h>
#include<math.h>

float can(float n){
    if(n==1) return 1;
    return sqrt(n+can(n-1));
}

int main(){
    float n;
    scanf("%f", &n);
    printf("%.2f", can(n));
}
