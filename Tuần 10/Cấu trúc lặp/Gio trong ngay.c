#include<stdio.h>

int main(){
    int i;
    printf("12 midnight\n");
    for(i=1;i<=11;i++){
        printf("%dam\n", i);
    }
        printf("12 noon\n");
    for(i=1;i<=11;i++){
        printf("%dpm\n", i);
    }
}
