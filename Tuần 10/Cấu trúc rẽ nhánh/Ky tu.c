#include<stdio.h>
#include<math.h>

int main(){
    char a;
    scanf("%c", &a);
    if(97<=a && a<=122){
        printf("The upper case character corresponding to %c is %c", a, a-32);
    }
    else if(65<=a && a<=90){
        printf("The lower case character corresponding to %c is %c", a, a+32);
    }
    else{
        printf("%c is not a letter", a);
    }
}    
