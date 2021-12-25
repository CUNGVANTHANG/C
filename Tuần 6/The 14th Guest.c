#include <stdio.h>
#include <string.h>

int so(char a[], char s[]){
    int i = 0;
    while(s[i] == a[i]){
        i++;
    }
    if(s[i] < a[i]) return 1;
    else return 0;
}

char kitudau(char s[]){
    return s[0];
}

char *xoaki(char s[]){
    s[strlen(s) - 1] = '\0';
    return s;
}

int main(){
    char s[100][100];
    char a[] = "Louis XIV";
    for(int i = 0; i <= 13; i++) fgets(s[i], 100, stdin);
    int dem = 'L' - kitudau(s[0]);
    int vitri = 0;
    int demL = 0;
    for(int i = 0; i <= 13; i++) {
        if(kitudau(s[i]) == 'L') demL += 1;
        if(kitudau(s[i]) <= 'L' && 'L' - kitudau(s[i]) <= dem) {
            dem = 'L' - kitudau(s[i]);
            vitri = i;
        }
    }
    if(demL == 0){
        for(int i = 0; i <= 13; i++){
            if(i == vitri + 1) printf("Louis XIV\n"); 
            printf("%s\n", xoaki(s[i]));
        }
    }
    else{
        for(int i = vitri + 1; i > vitri - demL; i--){
            if(so(a, s[i]) == 0 && so(a, s[i - 1]) == 1){
                vitri = i;
                break;
            }
        }
        for(int i = 0; i <= 13; i++){
            if(i == vitri) printf("Louis XIV\n");
            printf("%s\n", xoaki(s[i]));
        }
    }
    return 0;
}
