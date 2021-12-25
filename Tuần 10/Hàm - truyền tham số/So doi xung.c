#include<stdio.h>

void nhap(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}

void kiemTra(int x){
    int temp, r, sum = 0;
    
    for(temp=x;x!=0;x=x/10){
    	r = x%10;
    	sum = sum*10 + r;
    }
	if(temp==sum){
		 printf("yes\n");
	}	
	else{
		printf("no\n");
	}
       
}

int main(){
    int a[100];
    int n, i;
    scanf("%d", &n);
    nhap(a,n);
    for(i=0;i<n;i++){
    	kiemTra(a[i]);
    }	
}
