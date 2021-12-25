#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d", &n);
    int i, S=1;
    for(i=1;i<=n;i++){
        S=S*i;
    }
       printf("%d", S);
}
