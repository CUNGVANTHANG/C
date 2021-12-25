#include<stdio.h>

long long tich(long long n){
	if (n==0) {
		return 1;
	}
	long long x = 2*n+1;
	return  x*tich(n-1);
}

    


int main(){
    long long n;
    scanf("%lld", &n);
    printf("%lld", tich(n));
}
