#include <stdio.h>
#include <string.h>

int main(){
    char s[1000];
    scanf("%s", &s);
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == 'A') printf("T");
        else if (s[i] == 'T') printf("A");
        else if (s[i] == 'G') printf("X");
        else printf("G");
    }
    return 0;
}
