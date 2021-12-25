#include<stdio.h>
#include<math.h>

int main(){
    int luaChon;
    scanf("%d", &luaChon);
    switch(luaChon){
    case 0:
       luaChon=0;
       printf("2.61");
       break;
    case 1:
       luaChon=1;
       printf("2.95");
       break;
    default: 
       printf("3.17");
       break;
    }   
       
    
}
