#include<stdio.h>
#include<math.h>
// xich ma (n,k=0) x^k/ kGiaiThua

double fun(int x) {
    double sum=1, sum_old;
    int i = 1;
   double temp = x;
    while (sum - sum_old> 0.001) {
        sum_old = sum;
        sum += temp;
        i++;
        temp = temp * x / i;
    }
    return sum;
}
 
int main() {
    int x;

    scanf("%d", &x);
    printf("%.4lf", fun(x));
    return 0;
}
