#include<stdio.h>

void nhap(float a[], int n){
    int i;
    for(i=1;i<=n;i++){
        scanf("%f", &a[i]);
    }
}

void sapxep(float a[], int n){
    int i, j;
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(a[i]>a[j]){
                int temp = a[i];
                 a[i]=a[j];
                 a[j]=temp;
            } 
        }
    }
}

void trungvi(float a[], int n){
    int i;
    float S;
    for(i=1;i<=n;i++){
          if(n%2!=0){
             printf("%.1f", a[(n+1)/2]);
             break;
          }
          else{
              S = (a[n/2]+a[(n/2)+1])/2;
              printf("%.1f", S);
              break;
          }
    }
  
}

int main(){
    float a[100];
    int n;
    scanf("%d", &n);
    nhap(a,n);
    sapxep(a,n);
    trungvi(a,n);
}
