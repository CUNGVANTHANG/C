#include<stdio.h>

int main(){
    int a[1000][1000];
    int m, n;
    scanf("%d %d", &m, &n);
    int i, j;
    for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}	
	}	
    int i1, j1, i2, j2;
    scanf("%d %d %d %d", &i1, &j1, &i2, &j2);
    int tmp = a[i1-1][j1-1];
    a[i1-1][j1-1]=a[i2-1][j2-1];
    a[i2-1][j2-1]=tmp;
        
    for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");	
	}	
   
   
    
}
