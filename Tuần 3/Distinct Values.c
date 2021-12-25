#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
       if(a!=b && a!=c && b!=c){
        printf("3");
    }
       if(a!=b && a!=c && b==c
         ||a!=b && a==c && b!=c
         ||a==b && a!=c && b!=c){
        printf("2");
    }
       if(a==b && b==c){
        printf("1");
    }
   
    
}


