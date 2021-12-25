#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    char s[100][100];
    for(int i = 0; i <= n; i++) fgets(s[i], 100, stdin);
    for(int i = 1; i <= n; i++){
        if(strcmp(s[i], "Judas Iscariot\n") != 0) printf("%s", s[i]); 
    }
    return 0;
}
