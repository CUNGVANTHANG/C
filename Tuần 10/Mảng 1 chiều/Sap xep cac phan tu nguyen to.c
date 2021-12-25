#include<stdio.h>
#include<stdbool.h>
#include<math.h>

void nhap(int a[], int n){
    int i;
    for(i=1;i<=n;i++){
        scanf("%d", &a[i]);
    }
}

bool isPrime(int x){
    if(x<2){
        return false;
    }
    int i;
    for(i=2;i<=sqrt(x);i++){
        if(x%i==0)
          return false;
    return true;  
    }
  
}

void hienthi(int a[], int n){
    int i;
    for(i=1;i<=n;i++){
        printf("%d ", a[i]);
    }
}

void sapxep(int a[], int n){
    int i, j;
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
           if(isPrime(a[i])==true){
            if(a[i]>a[j]){
                int tmp = a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
           }
        }
    }
}

int main(){
    int a[100];
    int n;
    scanf("%d", &n);
    nhap(a,n);
    sapxep(a,n);
    hienthi(a,n);
}
