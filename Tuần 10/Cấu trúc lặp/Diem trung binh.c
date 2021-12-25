#include<stdio.h>

int main(){
    float a[100];
    int n;
    scanf("%d", &n);
    float S = 0;
    int i;
    for(i=1;i<=n;i++){
        scanf("%f ", &a[i]);
    }
    for(i=1;i<=n;i++){
        S = S + a[i];
    }
    float Tb = S/ n;
    printf("%.2f", Tb);
}
