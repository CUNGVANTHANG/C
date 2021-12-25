#include<stdio.h>

int main(){
    float a, b;
    scanf("%f %f", &a, &b);
    if(b!=0){
    float I = a/b;
    printf("%.2f", I);
    }
    else{
        printf("error");
    }
}
