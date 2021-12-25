#include<stdio.h>

void nhap(int a[][1000], int m, int n){
    int i, j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
}

void tong(int a[][1000], int m, int n){
	int i, j, c[1000];
	for(i=0;i<m;i++){
		c[i]=0;
	}	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			c[i]=c[i]+ a[i][j];
		}	
	}	
	for(i=0;i<m;i++){
		printf("%d ", c[i]);
			
	}	
}	


int main(){
    int a[1000][1000];
    int m, n;
    do{
         scanf("%d %d", &m, &n);
    }while(m<0 && n<0);
   
    nhap(a,m,n);
    tong(a,m,n);
    
    
}
