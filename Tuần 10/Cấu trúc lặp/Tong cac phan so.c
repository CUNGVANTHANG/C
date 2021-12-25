#include<stdio.h>

int main(){
    float n;
    scanf("%f", &n);
    float i;
    float S =0;
    

    for(i=0;i<=n; i++){
        S = S+i/(i+1);
    }
     printf("%.5f", S);
    

}    

