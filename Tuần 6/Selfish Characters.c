#include <stdio.h>
#include <string.h>

int main(){
    char a[1000];
    fgets(a, 1000, stdin);
    for(int i = 0; i < strlen(a); i++){
        int dem = 1;
        int demlai = 1;
        for(int j = i + 1; j < strlen(a); j++){
            if(a[i] == a[j]) dem += 1;
        }
        for(int j = 0; j < strlen(a); j++){
            if(a[i] == a[j] && i != j) demlai += 1;
        }
        if(dem == demlai) printf("%c", a[i]);
    }
    return 0;
}
