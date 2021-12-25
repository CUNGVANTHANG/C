#include<stdio.h>

int main(){
	int a[100];
	int i, j, n;
	  scanf("%d", &n);
	int p = 0;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}	
	while(p<n-1){
		while(a[p]==a[p+1]&&p<n-1){
			for(j=p;j<n-1;j++){
				a[j]=a[j+1];
				
		
			}	
		 n--;
		}
			p++;	
	}
	for(i=0;i<n;i++){
		printf("%d ", a[i]);
	}	
	return 0;
}	
