#include <stdio.h>
#include <string.h>

int main(){
    char a[] = "Zues";
    char b[] = "Zeus";
    char s[100];
    fgets(s, 100, stdin);
    char *pch = strstr(s, a);
    
    if((pch)){
        strncpy(pch, b, 4);
        printf("%s", s);
    }
    else printf("%s", s);
    return 0;
}
