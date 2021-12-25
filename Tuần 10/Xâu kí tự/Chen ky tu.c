#include<stdio.h>
#include<string.h>

void chen(char a[], int vt, char kitu[]){
    int i;
    int n = strlen(a);
    for(i=n-1;i>=vt;i--){
        a[i+1]=a[i];
    }
    a[vt]=kitu[0];
    a[n+1]='\0';
}


int main(){
    char a[100];
    int vt;
    char kitu[100];
    scanf("%s", &a);
    scanf("%d %s", &vt, &kitu);
    chen(a,vt,kitu);
    printf("%s", a);
    
}
