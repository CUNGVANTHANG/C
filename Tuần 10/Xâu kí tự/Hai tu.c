#include<stdio.h>
#include<string.h>

int main(){
    char a[100];
    fgets(a, sizeof(a), stdin);
     int i;
     for(i=0;i<strlen(a);i++){
        if(a[i]==' '){
            a[i]=',';
        }
     }
      printf("%s", a);
    
}
