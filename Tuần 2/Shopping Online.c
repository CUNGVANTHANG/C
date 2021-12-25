#include<stdio.h>
#include<math.h>

int main(){
    float a, b;
    scanf("%f", &a);
    b = a + 10 + a*0.3 + a*0.1;
    printf("%.2f", b);
}
