#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c;
    scanf("%f", &a);
    b = a/2.718;
    c = ceil(b);
    if(a>=0){
        printf("%.f", c);
    }
    if(a<0){
        printf("invalid");
    }
}
