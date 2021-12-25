#include<stdio.h>

int main(){
    char a[1000];
    scanf("%[^\n]s", &a);
    int count=1, i;
       for(i=0;a[i]!='\0';i++){
           if(a[i]==' ' && a[i+1]!=' ')
           count++;
       }
       if(count==1){
           printf("1 word");
       }
       else{
           printf("%d words", count);
       }
}
