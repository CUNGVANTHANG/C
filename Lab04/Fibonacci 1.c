#include<stdio.h>

void Fibonacci(int n){//cach 1
	int X1=1, X0=0, Xn;
	int i;
    for(i=0; i<n; i++){
        if(i<=1){
          Xn=i;
    }
        else{
          Xn = X1 + X0;
          X0 = X1;
          X1 = Xn;
    }
         printf("%d, ", Xn);
    }
}

int fibo(int x){//cach 2
	   if(x==0||x==1){
	     return x;
	    } 
	    else{
	    	return (fibo(x-1)+fibo(x-2));
		} 
}	


int main(){
	int n;
	scanf("%d", &n);
	printf("%d so Fibonacci dau tien:\n", n);
	Fibonacci(n);
	printf("\n\n\n\n\n");
	int i;
   	printf("%d so Fibonacci dau tien:\n", n);
	for(i=0;i<=n;i++){
		
		printf("%d, ", fibo(i));
	}	
	return 0;
	
	
}	
