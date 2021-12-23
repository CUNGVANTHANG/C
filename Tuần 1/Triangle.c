#include<stdio.h>

void drawTriangle(int m, int n) {
	 int i, j;
	 for(i = 1; i < 4; i++) {
	 	for(j = 1; j <=5; j++) {
	 		if(!((i == 1 && (j == 1 || j == 2 || j == 4 || j == 5 )) 
			 || (i == 2 && (j == 1 || j == 5 )))) {
			 	printf("*");
			} else {
			 	printf(" ");
			}	
		}
		printf("\n");	 		
	}	
}	

int main() {
     int m = 3, n = 5;
     drawTriangle(m, n);
	 return 0;
}	 	 		
