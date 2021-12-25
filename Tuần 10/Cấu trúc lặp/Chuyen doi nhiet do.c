#include<stdio.h>

int main(){
    float a, b;
    scanf("%f %f", &a, &b);
    float i;
    float C, K;
   
    for(i=a;i<=b;i++){
        C = (i-32)*5/9;
        K = C + 273.15;
        printf("%.0f %.2f %.2f\n", i, C, K);
    }
}
