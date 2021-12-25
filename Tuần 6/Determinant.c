#include<stdio.h>

int main(){
    int i, a[100][100], j;
    for(i=0;i<3;i++){
       for(j=0;j<3;j++){
           scanf("%d", &a[i][j]);
       }
    }
   int det;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
             det = a[0][0]*a[1][1]*a[2][2] + a[0][1]*a[1][2]*a[2][0] + a[0][2]*a[1][0]*a[2][1] - a[0][2]*a[1][1]*a[2][0]- a[0][1]*a[1][0]*a[2][2]- a[0][0]*a[1][2]*a[2][1];
        }
    }
    printf("%d", det);
    
    
}
