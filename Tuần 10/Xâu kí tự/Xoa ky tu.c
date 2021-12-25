#include<stdio.h>
#include<string.h>

void xoa(char a[], int vt){
    int i;
    int n = strlen(a);
    for(i=0;i<n;i++){
        if(vt==n-1){
            a[vt]='\0';
        }
        else if(vt<n-1){
            a[vt]= a[vt+1];
            vt++;
        }
    }
}

int main(){
    char a[100];
    int vt;
    scanf("%s", &a);
    scanf("%d", &vt);
    xoa(a,vt);
    printf("%s", a);
    return 0;
}
