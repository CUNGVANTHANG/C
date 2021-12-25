#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c;
    scanf("%f %f", &a, &b);
    c = a/(b*b);
    if(c<18.5){
        printf("Thieu can");
    }
    if(18.5<=c && c<25){
        printf("Binh thuong");
    }
    if(25<=c && c<30){
        printf("Thua can");
    }
    if(c>30){
        printf("Beo phi");
    }
}
