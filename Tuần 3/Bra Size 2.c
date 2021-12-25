#include<stdio.h>
#include<math.h>

int main(){
    int a; 
    scanf("%d", &a);
    if(10<=a && a<=11){
        printf("AA");
    }
    if(12<=a && a<=13){
        printf("A");
    }
    if(14<=a && a<=15){
        printf("B");
    }
    if(16<=a && a<=17){
        printf("C");
    }
    if(18<=a && a<=19){
        printf("D");
    }
    if(20<=a && a<=21){
        printf("E");
    }
    if(22<=a && a<=23){
        printf("F");
    }
    if(24<=a && a<=25){
        printf("G");
    }
    if(26<=a && a<=27){
        printf("H");
    }
    if(a<10 || a>27){
        printf("Sorry, we don't have your size!");
    }
}
