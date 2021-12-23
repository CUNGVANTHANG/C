#include<stdio.h>
#include<math.h>

void nhap(float a[], int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%f", &a[i]);
	}	
}

float trungbinh(float a[], int n){
	int i;
	float S =0;
	for(i=0;i<n;i++){
		S = S + a[i];
	}
	float tB = S/n;
	return tB;	
}

float Dolechchuan(float a[], int n){
	int i;
	float S = 0;
	float k = trungbinh(a,n);
	for(i=0;i<n;i++){
		S = S + (a[i]-k)*(a[i]-k);
	}	
	float o = sqrt(S/n);
	return o;
}	

int main(){
	float a[100];
	int n;
	printf("n = ");
	scanf("%d", &n);
	nhap(a,n);
	printf("\nKy vong cua day so: %.2f", trungbinh(a,n));
	printf("\nDo lech chuan cua day so: %.2f", Dolechchuan(a,n));
}	
