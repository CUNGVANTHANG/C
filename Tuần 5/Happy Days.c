#include<stdio.h>

int main(){
    int a[30];
    int i, n;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%d", &a[i]);
    }
    for(i=1;i<=n;i++){
        if(a[i]>a[1] && a[i]>=0){
            printf("%d ", i);
        }
    }
}
