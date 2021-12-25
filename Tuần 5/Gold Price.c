#include<stdio.h>

float nhap(float a[], int n){
	int i;
	for(i=1;i<=n;i++){
		scanf("%f", &a[i]);
	}	
}

float max(float a[], int n)
{
    float max = a[1];
    int i;
    for (i = 1; i <= n; i++)
        if (max < a[i])
            max = a[i];
    return max;
}

float min(float a[], int n){
    float min = a[1];
    int i;
    for(i=1;i<=n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
       return min;
}	

int main(){
	float a[100];
	int n;
    scanf("%d", &n);
    nhap(a, n);
    printf("%.2f %.2f", max(a,n), min(a,n));
}	

