#include<stdio.h>
#include<math.h>

int main(){
    int a;
    scanf("%d", &a);
    if (a == 3500){
    	printf("%d is a common year!", a);
    }	
	if (a != 3500 && a %4 == 0 ){
        printf("%d is a leap year!", a);
    }
    if(a%4 != 0 ){
        printf("%d is a common year!", a);
    }

}
