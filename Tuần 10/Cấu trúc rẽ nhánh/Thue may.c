#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(6<=a && a<b && b<17){
         printf("%d", 2500*(b-a)*c);
    }
    else if(17<=a && a<b && 17<b && b<=21){
        printf("%d", 3000*(b-a)*c);
    }
    else if(6<=a && a<b && 17<b && b<=21){
        printf("%d", 2500*c*(17-a)+3000*c*(b-17));
    }
}
