#include <stdio.h>
#include <string.h>

int main(){
    char s[1000];
    char b[1000];
    fgets(s, 1000, stdin);
    fgets(b, 1000, stdin);
    s[strlen(s) - 1] = '\0';
    b[strlen(b) - 1] = '\0';
    int sizeb = strlen(b);
    int dem = 0;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] != ' '){
            char a[100];
            int h = i;
            for(int j = 0; j < sizeb; j++){
            a[j] = s[h];
            h++;
            }
            if(strcmp(a, b) == 0) dem += 1;
        }
    }
    printf("%d", dem);
    return 0;
}
