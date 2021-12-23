#include<stdio.h>

int main(){
	int a, b;
	printf("Nhap chi so moi = ");
	scanf("%d", &a);
	printf("Nhap chi so cu = ");
	scanf("%d", &b);
	int tieuThu = a - b;
	int tien;
	if(0<=tieuThu && tieuThu<=50){
		 tien = 1549*tieuThu;
	}
	if(51<=tieuThu && tieuThu<=100){
		 tien = 1600*(tieuThu-50) + 1549*50;
	}	
	if(101<=tieuThu && tieuThu<=200){
		 tien = 1858*(tieuThu-100)+ 1600*50 + 1549*50;
	}	
	if(201<=tieuThu && tieuThu<=300){
		 tien = 2340*(tieuThu-200) +  1600*50 + 1549*50 + 1858*100;
	}	
	if(301<=tieuThu && tieuThu<=400){
		 tien = 2615*(tieuThu-300) +  1600*50 + 1549*50 + 1858*100 + 2340*100 ;
	}
	if(tieuThu>=401){
		 tien = 2701*(tieuThu-400) + 1600*50 + 1549*50 + 1858*100 + 2340*100 + 2615*100;
	}	
	  printf("Tien dien 1 thang phai tra la: %d dong", tien);		
}	
