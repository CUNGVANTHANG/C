#include<stdio.h>
#include<math.h>

int BCNN(int a, int b){
    int i, BC;
    for(i=a;i<=a*b;i++){
        if(i%a==0 && i%b==0){
            BC = i;
            break;
        }
    }
    return BC;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", BCNN(a,b));
}
