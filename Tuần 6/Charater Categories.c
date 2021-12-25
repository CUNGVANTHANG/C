#include <stdio.h>
#include <string.h>

int main(){
    char s[1000];
    fgets(s, 1000, stdin);
    int chucai = 0;
    int chuso = 0;
    int ktdb = 0;
    for(int i = 0; i < strlen(s) - 1; i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) chucai += 1;
        else if(s[i] >= '0' && s[i] <= '9') chuso += 1;
        else ktdb += 1;
    }
    printf("%d %d %d", chucai, chuso, ktdb);
    return 0;
}
