#include <stdio.h>
#include <string.h>

char *xoa(char *str){
    int len = strlen(str);
    str[len - 1] = '\0';
    return str;
}

int main(){
    int n;
    scanf("%d", &n);
    char a[100][100];
    int dem = 0;
    for(int i = 0; i <= n; i++) fgets(a[i], 100, stdin);
    for(int i = 1; i <= n; i++){
        if(strcmp(a[i], "Porthos\n") == 0 || strcmp(a[i], "Athos\n") == 0 || strcmp(a[i], "Aramis\n") == 0){
            if(strcmp(a[i+1], "Porthos\n") == 0 || strcmp(a[i+1], "Athos\n") == 0 || strcmp(a[i+1], "Aramis\n") == 0){
                if(strcmp(a[i+2], "Porthos\n") == 0 || strcmp(a[i+2], "Athos\n") == 0 || strcmp(a[i+2], "Aramis\n") == 0){
                    dem = i + 2;
                    break;
                }
            }
        }
    }
    for(int i = 1; i <= n; i++){
        if(i != n) printf("%s, ", xoa(a[i]));
        else printf("%s", xoa(a[i]));
        if(dem != 0 && dem == i) printf("d'Artagnan, ");
    }
    return 0;
}
