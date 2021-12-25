#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d", &n);
    int X1=1, X0=0, Xn;
    int i;
    for(i=0; i<n; i++){
        if(i<=1){
          Xn=i;
    }
        else{
          Xn = X1 + X0;
          X0 = X1;
          X1 = Xn;
    }
         printf("%d ", Xn);
    }
}
