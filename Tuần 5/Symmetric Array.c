#include<stdio.h>

int nhap(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}

int kiemTra(int a[], int n){
    int i, j, count = 0, S =0;
    for(i=0;i<n/2;i++){
            if(a[i]!=a[n-i-1]){
                printf("Asymmetric array.");
                return 0;
            }
            else if(a[i]==a[n-i-1]){
                count = count + 1;
            }
    }
    
    if(count == n/2 ){
        printf("Symmetric array.");
    }
    
}

int main(){
    int a[100];
    int n;
    scanf("%d", &n);
    nhap(a,n);
    kiemTra(a,n);
}
