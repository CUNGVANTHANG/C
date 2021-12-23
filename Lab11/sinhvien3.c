#include<stdio.h>
#include<stdlib.h>

typedef struct sinhvien SV;

struct sinhvien{
	char hovaten[100];
	int tuoi;
	float diemthi;
};

void nhap(SV *sv){
		printf("Nhap ho va ten cua sinh vien: "); fflush(stdin);
		gets(sv->hovaten);
		printf("Nhap tuoi cua sinh vien: "); fflush(stdin);
		scanf("%d", &(sv->tuoi));
		printf("Nhap diem thi cua sinh vien: "); fflush(stdin);
		scanf("%f", &(sv->diemthi));
}	

void xuat(SV *sv){
	printf("%-20s %-20d %-20.2f\n", sv->hovaten, sv->tuoi, sv->diemthi);
}	

int main(){
	SV sv1, sv2;
	printf("Nhap du lieu cho sinh vien 1: \n");
	nhap(&sv1);
	printf("\nNhap du lieu cho sinh vien 2: \n");
	nhap(&sv2);
	printf("--------------------THONG TIN SINH VIEN---------------\n");
	printf("%-20s %-20s %-20s\n", "Ho va ten", "Tuoi", "Diem thi");
	xuat(&sv1);
	xuat(&sv2);
}	
