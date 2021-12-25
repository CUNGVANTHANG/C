#include<stdio.h>

int main(){
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    int tong = a+b+c;
    float trungBinh = (a+b+c)/3;
    int tich = a*b*c;
    printf("%d", tong);
    printf("\n%.2f", trungBinh);
    printf("\n%d", tich);
}
