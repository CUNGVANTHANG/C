#include<stdio.h>

int main(){
    int a[20];
    int i, n;
    float S=0;
    float tB;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%d", &a[i]);
    }
    for(i=1;i<=n;i++){
        S = S + a[i];
       
    }
       tB=S/n;
      printf("%.2f", tB);
}
