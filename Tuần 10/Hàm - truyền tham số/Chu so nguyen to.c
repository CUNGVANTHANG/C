#include<stdio.h>
#include<math.h>
#include<stdbool.h>

void nhap(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}

bool isPrime(int b){
    if(b<2){
        return false;
    }
    int i;
    for(i=2;i<=sqrt(b);i++)
        if(b%i==0)
            return false;
    return true;
    
    
}

void kiemtra(int a[], int n){
    int i, b, c[100]; 
    for(i=0;i<100;i++) c[i]=0;
    for(i=0;i<n;i++){
        while(a[i]>0){
            b = a[i]%10;
            a[i]=a[i]/10;
                if(isPrime(b)==true){
                    c[i]++;
                }
        }
        printf("%d\n", c[i]);
    }
    
}

int main(){
    int n, a[100];
    scanf("%d", &n);
    nhap(a, n);
    kiemtra(a,n);
}
