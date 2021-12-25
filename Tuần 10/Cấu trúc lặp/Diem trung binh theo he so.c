#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    float a[100], x, y;
    float S = 0, tong = 0;
    int i, j=0;
    for(i=0;i<=2*n;i++){
        scanf("%f", &a[i]);
    }
    for(i=0;i<=2*n;i=i+2){
        tong = tong + a[i]*a[i+1];
        j = j + a[i+1];
    }
    float tB = tong/ j;
    printf("%.2f", tB);
}
