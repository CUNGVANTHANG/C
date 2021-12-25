#include<stdio.h>

void nhap(int a[], int n){
    int i;
    for(i=1;i<=n;i++){
        scanf("%d", &a[i]);
    }
}

void Smin(int a[], int n){
    int i, sum = 0, S1, S2;
    for(i=1;i<=n;i++){
        if(a[i]>a[i+1] && a[i+1]<a[i+2]){
            sum += a[i+1];
        }
        if(a[1]<a[2]){
             S1 = a[1];
        }
        if(a[n]<a[n-1]){
             S2 = a[n];
        }
    }
     int S = S1+ S2 + sum;
      printf("%d", S);
}


int main(){
    int a[100];
    int n;
    scanf("%d", &n);
    nhap(a,n);
    Smin(a,n);
}
