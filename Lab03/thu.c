#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(2<=n && n<=8){
    	if(n==2){
    		printf("Monday");
    	}	
    	if(n==3){
    		printf("Tuesday");
    	}
		if(n==4){
    		printf("Wednesday");
    	}	
    	if(n==5){
    		printf("Thursday");
    	}	
		if(n==7||n==8){
    		printf("Weekend");
    	}	
    
    }
	else{
		printf("invalid");
	}	
}	
