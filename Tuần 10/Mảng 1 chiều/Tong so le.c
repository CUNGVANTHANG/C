#include<stdio.h>

int main(){
    int a[100];
    int n, i, S =0;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%d", &a[i]);
    }
    for(i=1;i<=n;i++){
        if(a[i]%2!=0){
            S = S + a[i];
        }
    }
      printf("%d", S);
}
