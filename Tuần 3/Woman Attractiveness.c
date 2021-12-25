#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c, S, t;
    scanf("%f %f %f", &a, &b, &c);
    t = 3.14;
    S = a*b*sin((9*c*t)/180);
    if(a>=0 && b>=0 && c>=0){
        printf("%0.1f", S);
    }
    if(a<0 || b<0 || c<0){
        printf("invalid");
    }
}
