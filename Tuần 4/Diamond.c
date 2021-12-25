#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i, j;
	for(i=1; i<=2*n+1; i++){
		for(j=1; j<=2*n+1; j++){
			if(i==n+1 || j==n+1
			||j==n+2-i || j==i-n
			||j==i+n || j==3*n+2-i && i>n+1)			
		     {
				printf("* ");
	}
	       else if(i<n+1 && j>n+i
	       ||i>n+1 && j>=3*n+2-i
	       ||i<n+1 && j<n+2-i
		   ||i>n+1 && j<i-n 
		    ){
	        	printf(". ");
	}        	
			else{
				printf("  ");
	}	
	}
	       printf("\n");		
	}	
}	
