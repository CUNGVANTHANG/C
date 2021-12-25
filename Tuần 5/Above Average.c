#include<stdio.h>

int main(){
    double a[20];
    int i, n;
    scanf("%d", &n);
     double S = 0;
    for(i=1;i<=n;i++){
        scanf("%lf", &a[i]);
    }
    for(i=1;i<=n;i++){
        S = S + a[i];
    }
    double tB = S/n;
     for(i=1;i<=n;i++){
     if(a[i]>=tB){
         printf("%.2lf ", a[i]);
    }
    }
}
