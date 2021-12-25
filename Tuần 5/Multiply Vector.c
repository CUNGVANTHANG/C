#include<stdio.h>

int main(){
    float a[20];
    float b[20];
    int i, n;
    float S =0;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%f ", &a[i]);
        
    }    
    
    for(i=1;i<=n;i++){
        scanf("%f ", &b[i]);
       
    }
    for(i=1;i<=n;i++){
        S= S + a[i]*b[i];
    }
         printf("%.2f", S);
}
