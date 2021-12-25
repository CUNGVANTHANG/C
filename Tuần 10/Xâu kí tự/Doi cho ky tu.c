#include<stdio.h>
#include<string.h>

void hoanVi(char &a, char &b){
    char temp = a;
    a = b;
    b = temp;
}

void doiCho(char a[], int vt1, int vt2){
    int n = strlen(a);
    int i;
        hoanVi(a[vt1], a[vt2]);
}

int main(){
    char a[100];
    int vt1, vt2;
    scanf("%s", &a);
    scanf("%d %d", &vt1, &vt2);
    doiCho(a,vt1,vt2);
    printf("%s", a);
    return 0;
}
