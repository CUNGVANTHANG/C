#include <stdio.h> 
int main() 
{ 
	 int a[20]; 
	 int i, n;
	 
	    scanf("%d", &n);
	 for( i = 1; i <= n; i++ ){ 	  	    	 	
	
		scanf("%d", &a[i]);
	 }
	 
	
	 for( i = 1; i <= n; ++i ) 	  	    	 	
		printf("%d ", a[i]);
	return 0;
}

