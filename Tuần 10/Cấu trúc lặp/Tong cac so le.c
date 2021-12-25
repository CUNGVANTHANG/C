#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i;
    int S=0;
    for(i=1;i<=2*n+1;i+=2){
        S=S+i;
    }
       printf("%d", S);
}
