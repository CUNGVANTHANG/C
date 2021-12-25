#include <stdio.h>
#include <string.h>

int sosanh(char x[], char y[]){
    int i = 0;
    int j = 0;
    while(x[i] == y[i]){
        i++;
        j++;
    }
    if(x[i] > y[j]) return 1;
    else return 0;
}

int main(){
    char s[100][100];
    char a[100];
    a[0] = 'A';
    a[1] = 'B';
    a[2] = 'C';
    a[3] = 'D';
    for(int i = 0; i < 4; i++) fgets(s[i], 100, stdin);
    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 4; j++){
            if(sosanh(s[i], s[j]) == 1){
                char doi[100];
                strcpy(doi, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], doi);
                char doimang = a[i];
                a[i] = a[j];
                a[j] = doimang;
            }
        }
    }
    for(int i = 0; i < 4; i++) printf("%c ", a[i]);
    return 0;
}
