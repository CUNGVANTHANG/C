#include<stdio.h>

int main(){
	float a[20];
	int n, i;
	float tB, S =0;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%f", &a[i]);
    }
    if(n%2==0){
        for(i=0.5*n;i<=(0.5*n)+1;i++){
            S = S + a[i];
        }
           tB = S/2;
           printf("%.2f", tB);
    }
    else if(n%2!=0){
        for(i=(n+1)/2;   ;){
            printf("%.2f ", a[i]);
            return 0;
    }
    }
}	

