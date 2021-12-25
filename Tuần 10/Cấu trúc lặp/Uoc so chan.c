#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i, x;
    int count =0;
    for(i=2;i<=n;i=i+2){
        if(n%i==0){
          ++count;
             
        }
          
    }
    printf("%d ", count);
}
