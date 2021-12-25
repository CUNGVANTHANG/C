#include<stdio.h>

float max(float a[], int n){
    int i;
    int max = a[1];
    for(i=1;i<=n;i++){
        if(max<a[i]){
            max = a[i];
        }
    }
    return max;
}

float min(float a[], int n){
    int i;
    int min = a[1];
    for(i=1;i<=n;i++){
        if(min>a[i]){
            min = a[i];
        }
    }
    return min;
}

int main(){
    float a[100];
    int i, n;
    float S = 0;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%f", &a[i]);
    }
    for(i=1;i<=n;i++){
        S  = S + a[i];
    }
    float tB  = S/n;
    printf("%.2f\n%.0f\n%.0f", tB, max(a,n), min(a,n));
}
