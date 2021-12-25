#include <string.h>
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int k;
    scanf("%d", &k);
    char s[100][100];
    int stt[100];
    int dan = n - 1;
    for(int i = 0; i <= n; i++) fgets(s[i], 100, stdin);
    int i = 1;
    int dem = 0;
    while(dan != 0){
        if(i == n + 1) i = 1;
        if(strcmp(s[i], "\0") != 0)
            dem++;
        if(dem % (k + 1) == 0 && dem != 0) {
            // printf("%d %s ", dem, s[i]);
            dem = 0;
            strcpy(s[i], "\0");
            // printf("%s\n", s[i]);
            dan --;
        }
        i++;
    }
    for(int i = 1; i <= n; i++) if(strcmp(s[i], "\0") != 0) printf("%s", s[i]);
    return 0;
}
