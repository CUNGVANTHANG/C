#include<stdio.h>

int main(){
    int a[50];
    int i, n;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%d", &a[i]);
    }
    for(i=1;i<=n;i++){
        if(i%2!=0){
            printf("%d ", a[i]);
        }
    }
}
