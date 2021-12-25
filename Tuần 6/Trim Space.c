#include <stdio.h>
#include <string.h>

int main(){
    char s[10000];
    fgets(s, 1000, stdin);
    int dem = 0;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            dem = i;
            break;
        }
    }
    for(int i = 0; i < strlen(s); i++){
        if(i < dem) printf("%c", s[i]);
        else{
            if(s[i] == ' ') {
                if(s[i + 1] != ' ') printf("%c", s[i]);
            }
            else printf("%c", s[i]);
        }
    }
    return 0;
}
