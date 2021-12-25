#include<stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(6<=a && a<b && b<12){
        printf("%d", 6000*(b-a));
    }
    else if(12<=a && a<b && b<=18){
        printf("%d", 7500*(b-a));
    }
    else if(6<=a && a<b && b<=18){
        printf("%d", 6000*(12-a)+7500*(b-12));
    }
}
