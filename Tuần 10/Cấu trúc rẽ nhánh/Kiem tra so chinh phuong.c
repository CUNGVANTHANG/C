#include<stdio.h>
#include<math.h>

int main(){
    int a, b;
    scanf("%d", &a);
    b=sqrt(a);
    if(b*b==a){
        printf("yes");
    }
    else{
        printf("no");
    }
}
