#include <stdio.h>
#include <string.h>

int main(){
    char s[1000];
    scanf("%s", &s);
    int a = strlen(s);
    int dem = 0;
    if(a >= 6 && a <= 15){
        if(s[0] >= '0' && s[0] <= '9') printf("Invalid username.");
        else {
            for(int i = 0; i < a; i++){
                if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')) dem += 1;
                else {
                    printf("Invalid username.");
                    break;
                }
            }
        }
    }
    else printf("Invalid username.");
    if(dem == a) printf("Valid username.");
    return 0;
}
