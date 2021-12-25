#include<stdio.h>

int main(){
    int a, b, c, tuoi;
    scanf("%d %d %d", &a, &b, &c);
    tuoi=c-a+b;
    if(a<10000 && 0<a){
        printf("%d", tuoi);
    }
    else{
        printf("");
    }
}
