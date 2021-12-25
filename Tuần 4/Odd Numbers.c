#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int i;
	for(i=1; i<=2*n; i++)
	{
		if(i % 2 != 0)
		{ printf("%d ", i);}
	}	
}	
