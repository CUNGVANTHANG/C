#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d", &n);
    int i;
    int t = 0;
    int S = 0;
    for(i=1;i<=n;i++){
        t= pow(i,i);
        S = S  + t;
    }
    printf("%d", S);
}
