#include<stdio.h>

int main(){
    int n, x, m, a, b, c, H, d, e, f, S, t;
    scanf("%d", &n);
    x = n; // abc
    c=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    a=n%10;
    n=n/10;
    if(a>c){
    m=c*100+b*10+a; // cba
    H=x-m;  // abc - cba
    f=H%10;
    H=H/10;
    e=H%10;
    H=H/10;
    d=H%10;
    H=H/10;
      t=f*100+e*10+d;
    S = t + x - m;
              printf("%d", S);
    }
    else{
        printf("invalid");
    }
}
