#include <stdio.h>
#include <math.h>

long long giaithua(int x){
    long long giaithua = 1;
    for(int i = 1; i <= x; i++) giaithua *= i;
    return giaithua;
}


int main(){
    float x;
    scanf("%f", &x);
    double sum = x, oldSum = 0;
    int i = 1;
    while ( sum - oldSum > 0.001 || oldSum - sum > 0.001) {
        oldSum = sum;
        sum = sum + pow(-1, i) * pow(x, 2 * i + 1) / giaithua(2 * i + 1);
        i++;
    }
    printf("%.4lf", sum);
    return 0;
}
