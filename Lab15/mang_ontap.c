#include<stdio.h>

void nhap(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}	
}	

void xuat(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ", a[i]);
	}	
}	

int Sochan(n){
	if(n%3==0 && n%2==0){
		return 1;
	}
	return 0;
}

int DemChan(int a[], int n){
	int i, S = 0;
	for(i=0;i<n;i++){
		int count = Sochan(a[i]);
		if(count==1 && a[i]<20){
			S++;
		}	
	}	
	return S;
}	

int TongBP(int a[], int n){
	int i, S = 0;
	for(i=0;i<n;i++){
		int count = Sochan(a[i]);
		if(count==1){
			S = S + a[i]*a[i];
		}	
	}
	return S;	
}	

void SapXep(int a[], int n){
	int i, j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int tmp = a[i];
				a[i]=a[j];
				a[j]=tmp;
			}	
		}	
	}	
}	

int main(){
	int n, a[100], b[100];
	printf("Nhap n = ");
	scanf("%d", &n);
	printf("Nhap phan tu: ");
	nhap(a,n);
	printf("Xuat phan tu: ");
	xuat(a,n);
	int i, j, s=0;
	printf("\nCac phan tu chan va chia het cho 3 cua mang: ");
	for(i=0;i<n;i++){
		int count = Sochan(a[i]);
		if(count ==1){
			printf("%d ", a[i]);
		}	
	}
	printf("\nSo phan tu chan < 20 cua mang: %d", DemChan(a,n));
    printf("\nTong binh phuong cua cac phan tu chan va chia het cho 3: %d", TongBP(a,n));
	for(i=0;i<n;i++){
		int count= Sochan(a[i]);
		if(count ==1){
			b[s]=a[i];
			s++;
		}		
	}	
	for(i=0;i<s;i++){
		for(j=i+1;j<s;j++){
			if(b[i]>b[j]){
				int tmp = b[i];
				b[i]=b[j];
				b[j]=tmp;
			}	
		}	
	}	
	printf("\nDay so chan tang dan: ");
	xuat(b,s);
}	
