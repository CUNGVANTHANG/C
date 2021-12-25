#include<stdio.h>
#include<math.h>

int main(){
    float a;
    scanf("%f", &a);
    if(a<0){
        printf("So nhap nho hon 0");
    }
    else {
        printf("%.2f", sqrt(a));
    }
}

