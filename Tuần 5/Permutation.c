#include<stdio.h>

int main(){
    int a[20];
    int i, j;
    for(i=1;i<=5;i++){
        scanf("%d", &a[i]);
    }
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j==a[i]+1 ){
                printf("Q ");
            }
            else{
                printf("* ");
            }
        }
          printf("\n");
    }
}
