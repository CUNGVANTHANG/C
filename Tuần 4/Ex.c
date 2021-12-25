#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i, j;
	for(i=1;i<=2*n+1;i++){
		for(j=1;j<=2*n+1;j++){
			if((j>i && j<2*n+2-i)
			||(j<i && j>=2*n+3-i)
			||(i>j && i<2*n+2-j)
			||(i<j && i>=2*n+3-j)){
				printf(". ");
	}
	        else{
	        	printf("* ");
	}        	
	}
	     printf("\n");		
	}	
}	
