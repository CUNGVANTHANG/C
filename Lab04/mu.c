#include<stdio.h>
#include<math.h>

double power(double x, unsigned int n){
	   int i;
	  double xMuN =1 ;
	   for(i=1;i<=n;i++){
	   	  xMuN = x*xMuN;
	   }
}

int main(){
	double A, a, b, c, d;
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	 A  = 2*power(a,b)+5*power(c,d)-10;
	 printf("%lf", A);
	
	
}

