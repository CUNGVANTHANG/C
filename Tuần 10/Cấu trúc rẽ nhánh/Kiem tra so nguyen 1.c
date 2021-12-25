#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if(a%3==0 && a%4!=0 && (a%5==2 || a%5==3)){
          printf("YES");
    }
     else{
          printf("NO");
    }
}
