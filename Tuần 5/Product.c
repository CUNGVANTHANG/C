#include<stdio.h>

int main(){
    double a[30];
    int i, n;
    double S=1;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%lf", &a[i]);
    }
    for(i=1;i<=n;i++){
        S=S*a[i];
    }
       printf("%.2lf", S);
}
