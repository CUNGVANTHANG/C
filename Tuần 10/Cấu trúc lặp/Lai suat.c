#include<stdio.h>
#include<math.h>

int main(){
    int X, N;
    scanf("%d %d", &X, &N);
    float S = X*pow((1+0.007),N);
    printf("%.0f", S);
}
