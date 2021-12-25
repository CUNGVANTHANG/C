#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d", &n);
    int i;
    int S=0;
    for(i=1; i<n; i++){
        if(n % i == 0){
            S = S + i;
        }
    }
    if(S == n){
        printf("true");
    }
    else{
        printf("false");
    }
}
