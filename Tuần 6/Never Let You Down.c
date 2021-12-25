#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[100];
    int b[100];
    for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
    for(int i = 1; i <= n; i++) b[i] = i;
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(i % 2 == 0 && j % 2 == 0){
                if(a[i] > a[j]){
                int doi1 = a[j];
                a[j] = a[i];
                a[i] = doi1;
                int doi2 = b[j];
                b[j] = b[i];
                b[i] = doi2;
                }
            }
            if(i % 2 == 1 && j % 2 == 1){
                if(a[i] > a[j]){
                int doi1 = a[j];
                a[j] = a[i];
                a[i] = doi1;
                int doi2 = b[j];
                b[j] = b[i];
                b[i] = doi2;
                }
            }
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(i % 2 == 0 && j % 2 == 0){
                if(a[i] == a[j] && b[i] > b[j]){
                    int doi = b[j];
                    b[j] = b[i];
                    b[i] = doi;
                }
            }
            if(i % 2 == 1 && j % 2 == 1){
                if(a[i] == a[j] && b[i] > b[j]){
                    int doi = b[j];
                    b[j] = b[i];
                    b[i] = doi;
                }
            }
        }
    }
    for(int i = 1; i <= n; i++) if(i % 2 == 0) printf("%d ", b[i]);
    for(int i = 1; i <= n; i++) if(i % 2 == 1) printf("%d ", b[i]);
    return 0;
}    
