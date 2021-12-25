#include<stdio.h>
#include<stdlib.h>

typedef struct sinhvien SV;

struct sinhvien{
	char hovaten[100];
	int tuoi;
	float diemthi;
};

void nhap(SV sv[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("\nNhap du lieu cho sinh vien %d: \n", i+1);
		printf("Nhap ho va ten cua sinh vien: "); fflush(stdin);
		gets(sv[i].hovaten);
		printf("Nhap tuoi cua sinh vien: "); fflush(stdin);
		scanf("%d", &sv[i].tuoi);
		printf("Nhap diem thi cua sinh vien: "); fflush(stdin);
		scanf("%f", &sv[i].diemthi);
	}	
}	

void xuat(SV sv[], int n){
	int i;
	printf("--------------------THONG TIN SINH VIEN---------------\n");
	printf("%-20s %-20s %-20s\n", "Ho va ten", "Tuoi", "Diem thi");
	for(i=0;i<n;i++){
		printf("%-20s %-20d %-20.2f\n", sv[i].hovaten, sv[i].tuoi, sv[i].diemthi);
	}	
}	

int main(){
	int n;
	printf("Nhap so luong sinh vien: ");
	scanf("%d", &n);
	struct sinhvien sv[n];
	nhap(sv,n);
	xuat(sv,n);
}	
