#include<stdio.h>

int main(){
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float s = (a+b)/c;
    printf("%.2f", s);
}
