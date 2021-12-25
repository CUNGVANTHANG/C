#include<stdio.h>

int main(){
    int n;
    int S = 0;
    scanf("%d", &n);
    int i;
    for(i=1;i<n;i++){
          if(n%i==0){
              int uoc = i;
               S = S + i;
          }
    }
    if(S==n){
        printf("yes");
    }
    else{
        printf("no");
    }
}
