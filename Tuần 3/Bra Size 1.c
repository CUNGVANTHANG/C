#include<stdio.h>
#include<math.h>

int main(){
    int a;
    scanf("%d", &a);
      if(63<=a && a<=67){
        printf("30");
    }
      if(68<=a && a<=72){
        printf("32");
    }
      if(73<=a && a<=77){
        printf("34");
    }  
      if(78<=a && a<=82){
        printf("36");
    }
      if(83<=a && a<=87){
        printf("38");
    }
      if(88<=a && a<=92){
        printf("40");
    }
      if(93<=a && a<=97){
        printf("42");
    }
      if(98<=a && a<=102){
        printf("44");
    }
      if(103<=a && a<=107){
        printf("46");
    }
      if(a<63 || a>107){
        printf("Sorry, we don't have your size!");
    }
        
}
