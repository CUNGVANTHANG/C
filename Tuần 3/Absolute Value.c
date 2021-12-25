#include<stdio.h>
#include<math.h>

int main(){
    float a;
    scanf("%f", &a);
    if(a>=0){
        printf("%.2f", a);
    }
    if(a<0){
        printf("%.2f", a*-1);
    }
}
