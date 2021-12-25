#include<stdio.h>
#include<stdlib.h>

struct PhanSo{
	int tu;
	int mau;
};

struct PhanSo nhap(){
	struct PhanSo p;
	scanf("%d", &p.tu);
	while(1){
		scanf("%d", &p.mau);
		if(p.mau != 0){
			break;
		}	
	}	
	return p;
}

int ucln(int a, int b){
	if(a<0){
		a= a*-1;
	}	
	if(b<0){
		b=b*-1;
	}	
	while(a!=b){
		if(a>b){
			a -= b;
		}else{
			b -= a;
		}	
	}
	return a;	
}	

struct PhanSo rutgon(struct PhanSo p){
	if(p.tu != 0){
		int u = ucln(p.tu, p.mau);
		p.tu /= u;
		p.mau /= u;
	}	
	return p;
}	

int main(){
	struct PhanSo p = nhap();
	p = rutgon(p);
	printf("%d / %d", p.tu, p.mau);
	return 0;
}	
