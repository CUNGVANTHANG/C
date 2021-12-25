#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[100];
    int sum = 0;
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    for(int i = 0; i < n; i++){
        int dem = 1;
        int demlai = 1;
        for(int j = i + 1; j < n; j++){
            if(a[i] == a[j]) dem += 1;
        }
        for(int j = 0; j < n; j++){
            if(a[i] == a[j] && i != j) demlai ++;
        }
        if(dem == demlai) printf("%d %d\n", a[i], dem);
    }
    return 0;
}
