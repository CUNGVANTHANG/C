#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    char a[100][100];
    char b[100][100];
    for(int i = 0; i <= n; i++){
        fgets(a[i], 100, stdin);
        strcpy(b[i], a[i]);
    }
    for(int i = 1; i <= n; i++){
        int dem = 0;
        for(int j = 1; j <= n; j++){
            if(strcmp(a[i], b[j]) == 0) dem += 1;
        }
        if(dem == 1) printf("%s", a[i]);
    }
    return 0;
}
