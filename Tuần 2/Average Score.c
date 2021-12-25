#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c, d, e, g, h;
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &g);
    h = (a + b + c + d*2 + e*2 + g*3)/10;
    printf("%.2f", h);
}
