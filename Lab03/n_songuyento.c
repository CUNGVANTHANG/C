#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("n = ");
    scanf("%d", &n);
    if(n<=0){
    	printf("invalid");
    }	
    else{
    	int count = 0;
    	int m = 2;
    	while(1){
    		int mark =1;
    		int i;
    		for(i=2;i<=sqrt(m);i++){
    			if(m%i==0){
    				mark = 0;
    				break;
    			}	
    		}
			if(mark == 1){
				count++;
				printf("%d, ", m);
			}
			if(count >=n){
				break;
			}	
			m++;
    	}	
	}
    
    return 0;
    
}
