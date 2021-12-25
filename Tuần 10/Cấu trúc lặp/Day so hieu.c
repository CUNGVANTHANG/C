#include<stdio.h>

int hieu(int n){
    int f0=1;
    int f1=1;
    int fn =1;
    int i;
    if(n<2){
        printf("");
    }
    else{
        for(i=2;i<=n;i++){
            f0 = f1;
            f1 = fn;
            fn = 3*f1 - f0;
        }
    }
    return fn;
    
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", hieu(n));
}
