#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    unsigned long long S=1;
    int i;
    for(i=1;i<=(2*a+1);i+=2){
        S=S*i;
    }
        printf("%lld", S);
}
