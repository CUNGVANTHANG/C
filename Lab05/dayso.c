#include<stdio.h>

void nhap(float a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("Nhap a[%d] = ", i);
		scanf("%f", &a[i]);
	}	
}

float min(float a[], int n){
	int i;
	float min = a[0];
	for(i=0;i<n;i++){
		if(min>a[i]){
			min=a[i];
		}	
	}
	return min;	
}


float max(float a[], int n){
	int i;
	float max = a[0];
	for(i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}	
	}
	return max;	
}	

float tongduong(float a[], int n){
	int i;
	float S = 0;
	for(i=0;i<n;i++){
		if(a[i]>0){
			S = S + a[i];
		}	
	}	
	return S;
}


float sophantuam(float a[], int n){
	int i;
	float S = 0;
	for(i=0;i<n;i++){
		if(a[i]<0){
			S = S + 1;
		}	
	}
	return S;	
}		

int main(){
	float a[100];
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	nhap(a,n);
	printf("\nPhan tu nho nhat: %.2f", min(a,n));
    printf("\nPhan tu lon nhat: %.2f", max(a,n));
    printf("\nTong cac phan tu duong: %.2f", tongduong(a,n));
    printf("\nSo phan tu am: %.2f", sophantuam(a,n));
}	
