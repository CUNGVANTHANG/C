#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d", &n);
    int i;
    
    for(i=1;i<=n;i++){
        int S = pow(i, 2);
        printf("%d %d\n", i, S);
    }
   
}
