#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if(a==1){
        printf("7000");
    }
    else if(a>1 && a<=30){
        printf("%d", 7000+(a-1)*5000);
    }
    else if(a>30){
        printf("%d", 7000+29*5000+(a-30)*3000);
    }
}
