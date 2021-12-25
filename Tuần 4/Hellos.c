#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i;
    for(i=1; i<=n; i++){
        if(n<100){
            printf("Hello, world\n");
        }
    }
    if(n<0 || n>=100){
            printf("invalid");
    }
}    
