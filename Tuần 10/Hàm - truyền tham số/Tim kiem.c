#include<stdio.h>

void kt(int a[], int k[], int n){
	int i, j, b[100], c[100], d[100];
	for(i=0;i<n;i++) {c[i]=0;}
	for(i=0;i<n;i++){
		while(a[i]>0){
			b[c[i]]=a[i]%10;
			a[i]=a[i]/10;
			c[i]=c[i]+1;
		}	
		for(j=0;j<c[i];j++){
			d[j]= b[c[i]-1-j];
		}
		for(j=0;j<c[i];j++){
		    if(d[j]==k[i]){
			    printf("%d\n", j+1);
			    break;
		    } 		
	    }
	    for(j=0;j<c[i];j++){
	    	if(j==c[i]-1 && d[j]!=k[i]){
	    		printf("-1\n");
	    		return;
	    	}	
	    }	
			
	}	
}	

int main(){
	int n, k[100], a[100];
	scanf("%d", &n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d %d", &a[i], &k[i]);
	}
	kt(a,k,n);
	
}	
