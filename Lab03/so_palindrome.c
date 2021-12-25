#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d", &n);
    int temp, r, sum = 0, x = n;
    for(temp=n;n!=0;n=n/10){
    	r = n%10;
    	sum = sum*10 + r;
    }
	if(temp==sum){
		 printf("So %d la so palindrome", x);
	}	
	else{
		printf("So %d khong phai la so palindrome", x);
	}
	return 0;
    	
  
}

