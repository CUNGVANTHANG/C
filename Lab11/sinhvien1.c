#include<stdio.h>
#include<stdlib.h>

struct sinhvien{
	char hovaten[100];
	int tuoi;
	float diemthi;
};

int main(){
	int n;
	printf("Nhap so luong sinh vien: ");
	scanf("%d", &n);
	struct sinhvien sv[n];
	
	//nhap du lieu
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
	
	//in thong tin
	printf("--------------------THONG TIN SINH VIEN---------------\n");
	printf("%-20s %-20s %-20s\n", "Ho va ten", "Tuoi", "Diem thi");
	for(i=0;i<n;i++){
		printf("%-20s %-20d %-20.2f\n", sv[i].hovaten, sv[i].tuoi, sv[i].diemthi);
	}	
}	
