#include<stdio.h>
#include<math.h>

int main(){
    float n;
    scanf("%f", &n);
    if(n > 0){
    printf("%.1f ", n);
    printf("%.1f ", log2(n));
    printf("%.1f ", n*n);
    printf("%.1f ", pow(n,3));
    printf("%.1f ", 2*n);
    }
    if(n < 0){
        printf("invalid");
    }    
   
}
