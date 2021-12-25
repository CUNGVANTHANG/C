#include<stdio.h>

int main(){
    double a[20][20];
    int n, m, i, j;
    double S = 0;
    scanf("%d %d", &n, &m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%lf", &a[i][j]);
        }
    }
     int x;
     scanf("%d", &x);
       
           for(j=1;j<=m;j++){
          
           S =  S + a[x][j];
        }
       
        
        
        
      printf("%.2lf", S);
            
}
