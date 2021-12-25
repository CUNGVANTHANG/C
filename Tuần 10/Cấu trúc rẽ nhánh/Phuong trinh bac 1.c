#include<stdio.h>

int main(){
    float a, b;
    scanf("%f %f", &a, &b);
    float x = -b/a;
    if(a==0 && b!=0){
        printf("phuong trinh vo nghiem");
    }
    if(a==0 && b==0){
        printf("phuong trinh co vo so nghiem");
    }
    if(a!=0 && (b==0 || b!=0)){
        printf("%.2f", x);
    }
}
