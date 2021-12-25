#include<stdio.h>
#include<math.h>
#define pi 3.14

int main(){
    float r;
    scanf("%f", &r);
    float d, chuVi, S;
    d = r*2;
    chuVi = r*2*pi;
    S = r*r*pi;
    printf("%.0f", d);
    printf("\n%.2f", chuVi);
    printf("\n%.2f", S);
}
