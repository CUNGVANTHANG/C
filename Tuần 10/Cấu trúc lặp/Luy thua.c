#include<stdio.h>
#include<math.h>


int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    unsigned long long S = pow(a, b);
    printf("%lld", S);
}
