#include<stdio.h>
#include<math.h>

int main(){
     int n;
     scanf("%d", &n);
     int i;
     int S;
     int p = 0;
     for(i=1;i<=n;i++){
         p = p+i;
         S = S + p;
     }
     printf("%d", S);
}
