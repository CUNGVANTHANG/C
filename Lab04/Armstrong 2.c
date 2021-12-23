#include<stdio.h>

void Armstrong(int x){
	int a, b, c;
	int i, dem =0;
	 x = a*b*c;
	for(a=1;a<=9;a++){
		for(i=b;b<=9;b++){
			for(c=1;c<=9;c++){
				x = a*a*a + b*b*b + c*c*c;
				  if(100<x && x<999){
				  	  printf("%d ", x);
				  	  dem = dem +1;
				  }	
			}	
		}	
	}	
      printf("Co tat ca %d so Armstrong", dem);
	
}	

int main(){
    int x;
    Armstrong(x);
    
}	
