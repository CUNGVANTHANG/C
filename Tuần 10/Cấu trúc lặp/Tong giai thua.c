#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i;
    int S=0;
    int gt = 1;
    for(i=1;i<=n;i++){
        gt = gt*i;
        S = S + gt;
    }
    printf("%d", S);
}    
