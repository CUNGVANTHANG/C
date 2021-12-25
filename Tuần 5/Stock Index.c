#include<stdio.h>

int main(){
    float a[100];
    int i, n;
    float S;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%f", &a[i]);
    }
    for(i=2;i<=n;i++){
        if(a[i]>0){
            S= a[i]-a[i-1];
            if(S>0){
                printf("%.2f ", S);
            }
            else if(S<0){
                printf("%.2f ", -S);
            }
             
        }
       else if(a[i]<0){
            S= -(a[i]-a[i-1]);
            if(S>0){
                printf("%.2f ", S);
            }
            else if(S<0){
                printf("%.2f ", -S);
            }
            
        }
       
    }
}
