#include<stdio.h>
#include<math.h>

int main(){
    int a, b, max;
    scanf("%d %d", &a, &b);
    max = (a>b)?a:b;
    if(a < pow(2,31)-1 && b < pow(2,31)-1){
         printf("%d", max);
    }
}
