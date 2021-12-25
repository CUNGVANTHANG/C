#include <stdio.h>

int main(){
    char a[100];
    int sum = 0;
    scanf("%s", &a);
    for(int i = 0; i < 9; i++) sum = sum + (a[i] - '0') * (10 - i);
    int x =  sum % 11; 
    int b = 11 - x; 
    for(int i = 0; i < 9; i++) {
        if(i == 0 || i == 3 || i == 8) printf("%d-", a[i] - '0');
        else printf("%d", a[i] - '0');
    }
    if(b == 10) printf("X");
    else printf("%d", b);
    return 0;
}
