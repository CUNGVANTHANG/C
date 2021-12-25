#include<stdio.h>

int main(){
    int a[50][50];
    int i, j, n, m;
    scanf("%d %d", &n, &m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d", &a[i][j]);
        }
    }
    int x, y;
    scanf("%d %d", &x, &y);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(a[x][y]==1){
                printf("Seat %d%d is sold.", x, y);
            }
            
            if(a[x][y]==0){
                printf("Your seat is booked. Please complete the payment.");
            }
          return 0; 
        }
         
    }
}
