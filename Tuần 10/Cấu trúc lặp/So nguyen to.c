#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n<2){
    	printf("no");
    }	
      else{
    int i;
    int a = 1;
    for(i=2; i<= sqrt(n); i++){
    	if(n%i==0){
    		a = 0;
    		break;
    }   

     }
      if(a==1){
     		printf("yes");
     }		
	 else {
	 	 printf("no");
	 }	
      }
    
    
}
