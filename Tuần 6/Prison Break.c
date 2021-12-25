#include <stdio.h>
#include <string.h>

int dem(char s[], char a[], int i){
    int dem = 0;
    for(int j = 0; j < strlen(a); j++){
        if(a[j] == s[i]) dem ++;
        i++;
    }
    if(dem == strlen(a)) return 1;
    else return 0;
}

int main(){
    char s[1000];
    fgets(s, 1000, stdin);
    char a[] = "Kaniel Outis";
    char b[] = "Michael Scofield";
    char *p = strstr(s, a);
    if(p){
        for(int i = 0; i < strlen(s); i++){
            if(dem(s, a, i) == 1){
                printf("%s", b);
                i += strlen(a) - 1;
            }
            else printf("%c", s[i]);
        }
    }
    else printf("%s", s);
    return 0;
}
