#include<stdio.h>

int main(){
    int a[100][100];
    int i, n, j;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    int k;
    scanf("%d", &k);
    int di =0;
    int ve = 0;
    for(i=0;i<n;i++){
        if(i==k-1){
            for(j=0;j<n;j++){
                if(a[i][j]==1){
                    di++;
                    if(i==j){
                    ve++;
                    }
                }
                
            }
        }
        else{
            for(j=0;j<n;j++){
                if(a[i][j]==1 && j==k-1){
                    ve++;
                }
            }
        }
    }
    printf("%d %d", di, ve);
    return 0;
   
}
