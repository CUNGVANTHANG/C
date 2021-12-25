#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float t = (a+b+c)/2;
    float S = sqrt(t*(t-a)*(t-b)*(t-c));
    if(a+b > c && a+c>b && b+c>a){
         printf("%.2f", S);
    }
    else{
        printf("invalid");
    }
}
