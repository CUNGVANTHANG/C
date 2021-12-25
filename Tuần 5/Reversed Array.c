#include<stdio.h>

int main(){
    float a[20];
    int i, n;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%f", &a[i]);
    }
    for(i=n;i>=1;i--){
        printf("%.2f ", a[i]);
    }
}
