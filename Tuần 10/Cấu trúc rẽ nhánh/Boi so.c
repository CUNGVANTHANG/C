#include<stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(b!=0 && a%b==0){
        printf("yes");
    }
    else{
        printf("no");
    }
}
