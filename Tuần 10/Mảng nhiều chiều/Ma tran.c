#include<stdio.h>

void nhap(int a[][1000], int m, int n){
	int i, j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}	
	}	
}

int main(){
    int a[1000][1000];
    int m, n, p, hang[1000], cot[1000];
    scanf("%d %d %d", &m, &n, &p);
    nhap(a,m,n);
    int i, j;
    for(i=0;i<p;i++){
        scanf("%d %d", &hang[i], &cot[i]);
    }
    for(i=0;i<p;i++){
         printf("%d\n", a[hang[i]-1][cot[i]-1]);
    }
}
