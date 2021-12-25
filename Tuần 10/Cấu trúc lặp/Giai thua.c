#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i;
    int S = 1;
    for(i=1;i<=n;i++){
        S = S*i;
    }
    printf("%d", S);
}
