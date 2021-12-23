#include<stdio.h>
#include<stdbool.h>
#include<math.h>

void nhap(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}	
}	

bool nguyento(int n){
	if(n<2){
		return false;
	}	
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
        }  
		 
	}
	return true; 	
}

void xuat(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ", a[i]);
	}	
}

void sapxep(int a[], int n){
	int i, j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
				int tmp = a[i];
				a[i]=a[j];
				a[j]=tmp;
			}	
		}	
	}	
	
}	

int main(){
	int a[100];
	int n, i;
	printf("Nhap day so\n");
	printf("So phan tu n = ");
	scanf("%d", &n);
	nhap(a,n);
	printf("\nDay so vua nhap: ");
	xuat(a,n);
	printf("\nCac phan tu cua mang la so nguyen to:");
	for(i=0;i<n;i++){
	    if(nguyento(a[i])==true){
		   printf("%d ", a[i]);
	    }	
	}
	sapxep(a,n);
	printf("\nDay so nguyen to giam dan: ");
	for(i=0;i<n;i++){
	    if(nguyento(a[i])==true){
		     
		     printf("%d ", a[i]);
	    }	
	}
	
}	
