#include<stdio.h>
#include<stdlib.h>

void nhap(double *a, int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%ld", a+i);
	}
}   		

double *Minn(double *a,int n)
{
    if(n<=0)
        return NULL;
    double *min=a,*p,*q=a+n;
    for(p=a+1;p<q;p++)
        if(*p < *min)
            min=p;
    return min;
}

int main(){
	double *a = NULL;
	int n;
	printf("Nhap n:\n");
	scanf("%d", &n);
	a = (double*)malloc(n*sizeof(double));
	printf("Nhap phan tu:\n");
	nhap(a,n);
	double *min = Minn(a,n);
	if(min!=NULL){
		printf("Phan tu nho nhat: %ld", *min);
	}
	else{
		printf("Mang rong");
	}	
	
	if(a!=NULL){
		free(a);
	}	
	return 0;	
}	
