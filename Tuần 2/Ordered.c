#include<stdio.h>
#include<math.h>

int main(){
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if(x < y && y < z && x < z)
    { printf("true");}
    if(x > y && y > z && x > z)
    { printf("true");}
    if(x==y && y ==z)
    {printf("false");}
    if(x < y && y > z)
    {printf("false");}
}
