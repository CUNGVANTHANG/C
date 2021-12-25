#include<stdio.h>
#include<math.h>

int main(){
    int a, b;
    scanf("%d", &a);
    b=sqrt(a);
    if( (a%5 == 1)  && a%3==0 && b*b == a){
        printf("YES");
    }
    else {
        printf("NO");
    }
}
