#include <stdio.h>
#include <math.h>
 
void nhiPhan(int x){
	if(x==0)
	  return;
	else{
		int r = x%2;
		nhiPhan(x/2);
		printf("%d", r);
	}  
}
 
int main()
{
     int n;
      
      	   scanf("%d", &n);
	  if(n<0){
     		printf("invalid");
		}
	   else{	
		do{
			
     	}while(n<0);
     		nhiPhan(n);
     }
   
}
