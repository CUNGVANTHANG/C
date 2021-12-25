#include <stdio.h>
#include <string.h>

int main(){
    char arr[1000];
    scanf("%s", &arr);
    int d = 1;
    for(int i = 0; i < strlen(arr); i++){
        if(arr[i] == 'm'){
            if(arr[i + 1] == 'a'){
                if(arr[i + 2] == 's'){
                    if(arr[i + 3] == 'o'){
                        if(arr[i + 4] == 'n') {
                            printf("Freemasonry.");
                            d = 0;
                        }
                    }
                }
            }
        }
    }
    if(d == 1) printf("Normal string.");
    return 0;
}
