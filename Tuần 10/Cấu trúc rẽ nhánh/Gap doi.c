#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if(a%2==0){
       printf("%d", a);
    }
    else if(a%2!=0){
        printf("%d", 2*a);
    }
}
