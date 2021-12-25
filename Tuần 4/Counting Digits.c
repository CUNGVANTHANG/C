#include<stdio.h>

int main(){
    int n, count = 0;
    scanf("%d", &n);
     if(n==0){
        printf("1");
    }else if(n!=0){
        while(n!=0){
        n = n/10;
        count = count + 1;
        }
         printf("%d", count);
    }
    
   
    
    
}
