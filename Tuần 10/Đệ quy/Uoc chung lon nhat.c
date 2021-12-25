#include<stdio.h>

int uoc(int x, int y){
    if(x==y) return x;
    if(x>y) return uoc(x-y,y);
    else return uoc(x, y-x);
}

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", uoc(x,y));
}
