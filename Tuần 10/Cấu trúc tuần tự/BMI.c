#include<stdio.h>

int main(){
    float a, b;
    scanf("%f %f", &a, &b);
    float BMI = a/(b*b);
    printf("%.2f", BMI);
}
