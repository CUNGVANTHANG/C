#include<stdio.h>

int main(){
    int i, n;
    while(1){
        scanf("%d", &n);
        if(n%5==0 && n>0){
            printf("%d\n", n/5);
        }
        if(n%5!=0 && n!=-1||n<0 && n!=-1){
            printf("-1\n");
        }
        if(n==-1){
            printf("bye");
            break;
        }
      
    }
    
}
