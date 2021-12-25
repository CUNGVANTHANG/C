#include<stdio.h>

int main(){
    int a[20][3];
    int i, j, n, S = 0;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=3;j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=1;i<=n;i++){
         if(a[i][2]>30 && a[i][1]==0 && a[i][3]==1){
              S = S +1;
         }
    }
    printf("%d", S);
}
