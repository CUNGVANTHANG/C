#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
  if(a>0 && b>0 && c>0 && a+b>c && c+a>b && b+c>a){
    if(a==b && b==c){
        printf("tam giac deu");
    }
    else if((a==b && a<c || a==c && a<b || b==c && b<a) && (a+b>c && a+c>b && b+c>a)){
        printf("tam giac can");
    }
    else if(a*a + b*b == c*c||a*a + c*c == b*b||b*b + c*c == a*a){
        printf("tam giac vuong");
    }
    else{
        printf("tam giac thuong");
    }
    }
    else{
        printf("khong phai tam giac");
    }
}
