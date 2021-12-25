#include<stdio.h>

int main(){
    float a[100];
    float S = 0, P =0;
    int i, n;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%f", &a[i]);
    }
    for(i=1;i<=n;i++){
        S = S + a[i];
    }
    float tB = S/n;
    for(i=1;i<=n;i++){
        P = P+(a[i]-tB)*(a[i]-tB);
    }
    float phuongSai = P/n;
    printf("%.2f %.2f", tB, phuongSai);
}
