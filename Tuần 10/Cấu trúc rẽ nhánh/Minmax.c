#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max, min;
    max = (a>b)?a:b;
    max = (max>c)?max:c;
    min = (a<b)?a:b;
    min = (min<c)?min:c;
        printf("%d %d", min, max);
}
