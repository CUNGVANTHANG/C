#include<stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int i;
     for(i=1;i<=a;i++){
         if(i*2+(a-i)*4==b){
             printf("chicken = %d, dog = %d", i, a-i);
             break;
         }
     
     }
        if(i*2+(a-i)*4!=b){
        	printf("invalid");
        }	
    
    
    
}
