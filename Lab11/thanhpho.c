#include<stdio.h>
#include<stdlib.h>

struct Thanhpho{
	char ten[100];
	char thunhap[100];
	char danso[100];
	char docviet[100];
};	

typedef struct Thanhpho TP;

void nhap(TP tp[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("\nNhap du lieu cho thanh pho %d:\n", i+1);
		printf("Nhap ten thanh pho:"); fflush(stdin);
		gets(tp[i].ten);
		printf("Tong thu nhap cua thanh pho:"); fflush(stdin);
		gets(tp[i].thunhap);
		printf("Dan so cua thanh pho:"); fflush(stdin);
		gets(tp[i].danso);
		printf("Ti le biet doc viet:"); fflush(stdin);
		gets(tp[i].docviet);
		
	}	
}	

void xuat(TP tp[], int n){
	int i;
	printf("----------------------------------------------THONG TIN THANH PHO------------------------------\n");
	printf("%-20s %-20s %-20s %-20s\n", "Ten thanh pho", "Tong thu nhap", "Dan so", "Ti le biet doc viet");
	for(i=0;i<n;i++){
		printf("%-20s %-20s %-20s %-20s\n", tp[i].ten, tp[i].thunhap, tp[i].danso, tp[i].docviet);
	}	
}	

int main(){
	int n;
	printf("Nhap so luong thanh pho:");
	scanf("%d", &n);
	TP tp[n];
	nhap(tp,n);
	xuat(tp,n);
}	
