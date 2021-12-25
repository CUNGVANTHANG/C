#include<stdio.h>
#include<string.h>

void thaydoi(char a[], int vt, char kitu[]){
    int i;
    int n = strlen(a);
    for(i=0;i<n;i++){
        a[vt] = kitu[0];
    }
}

int main(){
    char a[100];
    scanf("%s", &a);
    int vt;
    char kitu[100];
    scanf("%d %s", &vt, &kitu);
    thaydoi(a,vt,kitu);
    printf("%s", a);
    return 0;
}
