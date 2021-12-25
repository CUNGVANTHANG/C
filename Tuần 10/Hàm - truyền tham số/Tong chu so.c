#include<stdio.h>

int nhap(int a[], int n){
    int i;
    for(i=1;i<=n;i++){
        scanf("%d", &a[i]);
    }
}

int tong(int a[], int n){
    int b, i, S = 0;
    for(i=1;i<=n;i++){
        while(a[i]>0){
        b = a[i]%10;
        S = S + b;
        a[i] = a[i]/10;
        }
       printf("%d\n", S);
    }    
   
}


int main(){
    int n;
    int a[10];
    scanf("%d", &n);
    nhap(a,n);
    tong(a,n);
    
    
}
