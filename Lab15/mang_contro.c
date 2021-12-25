#include<stdio.h>
#include<stdlib.h>

// a+i <=> &a[0+i]
//*(a+i) <=> a[i]

void Nhap(int *a, int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d", a+i);
	}	
}	

void Xuat(int *a, int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ", *(a+i));
	}	
}	

int Tong(int *a, int n){
	int i, S=0;
	for(i=0;i<n;i++){
		if(*(a+i)%3==0 && *(a+i)%9==0){
			S = S + *(a+i);
		}	
	}	
	return S;
}	

void Sapxep(int *a, int n){
	int i, j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(*(a+i)>*(a+j)){
				int tmp = *(a+i);
				*(a+i) = *(a+j);
				*(a+j) = tmp;
			}	
		}	
	}	
}

int *Minn(int *a,int n)
{
    if(n<=0)
        return NULL;
    int *min=a,*p,*q=a+n;
    for(p=a+1;p<q;p++)
        if(*p < *min)
            min=p;
    return min;
}

int *Max(int *a,int n)
{
    if(n<=0)
        return NULL;
    int *max=a,*p,*q=a+n;
    for(p=a+1;p<q;p++)
        if(*p > *max)
            max=p;
    return max;
}

int Tim(int *a, int n, int x){
	int i;
	for(i=0;i<n;i++){
		if(*(a+i)==x){
			return i+1;
		}	
	}
	return 0;	
}	

int main(){
	int *a = NULL;
	int n, x;
	do{
		printf("Nhap so luong phan tu:\n");
		scanf("%d", &n);
		if(n<0){
			printf("So luong phan tu phai >=0!\n");
		}	
	}while(n<0);
	 a = (int*)malloc(n*sizeof(int));
	 printf("Nhap phan tu:\n");
	Nhap(a,n);
	printf("Nhap phan tu muon tim: ");
	scanf("%d", &x);
	printf("\nXuat cac phan tu: ");
	Xuat(a,n);
	printf("\nTong cac phan tu chia het cho 3 va 9: %d", Tong(a,n));
	int *min = Minn(a,n);
	if(min!=NULL){
		printf("\nPhan tu nho nhat: %d", *min);
	}
	else{
		printf("\nMang rong");
	}	
	int *max = Max(a,n);
	if(max!=NULL){
		printf("\nPhan tu lon nhat: %d", *max);
	}
	else{
		printf("\nMang rong");
	}	
	int count = Tim(a,n,x);
	if(count == 0){
	    printf("\nPhan tu x khong co trong mang");
	}	
	else{
		printf("\nPhan tu x duoc tim thay o vi tri %d", count);
	}
	printf("\nMang sau khi sap xep: ");
	Sapxep(a,n);
	Xuat(a,n);
	if(a!=NULL){
		free(a);
	}	
	return 0;
}	
