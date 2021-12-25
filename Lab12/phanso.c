#include<stdio.h>
#include<stdlib.h>

typedef struct Phanso{
	float tuso;
	float mauso;
}phanso;

void nhap(phanso *ps){
	printf("Hay nhap tu so = ");
	scanf("%f", &(ps->tuso));
	printf("Hay nhap mau so = ");
	scanf("%f", &(ps->mauso));
}	

void xuat(phanso ps){
	printf("Phan so co gia tri = %.2f", ps.tuso/ps.mauso);
	
}

float UCLN(float A, float B){
	while(A != B) {
        if (A > B) {
            A -= B;
        }else{
            B -= A;
        }
    }
    return A;
}	

void rutgon(phanso *ps){
	if(ps->mauso!=0){
		int S = UCLN(ps->tuso, ps->mauso);
			ps->tuso /= S;
			ps->mauso /= S;
			
	}	
	printf("%.0f/%.0f", ps->tuso, ps->mauso);
}

phanso tong(phanso a, phanso b){
	phanso c;
	c.tuso = a.tuso * b.mauso + b.tuso * a.mauso;
    c.mauso = a.mauso * b.mauso;
	return c;	
}

phanso hieu(phanso a, phanso b){
	phanso d;
	d.tuso = a.tuso * b.mauso - b.tuso * a.mauso;
	d.mauso = a.mauso * b.mauso;
	return d;
}	

phanso tich(phanso a, phanso b){
	phanso e;
	e.tuso = a.tuso * b.tuso;
	e.mauso = a.mauso * b.mauso;
	return e;
}	

phanso thuong(phanso a, phanso b){
	phanso f;
	f.tuso = a.tuso*b.mauso;
	f.mauso = a.mauso*b.tuso;
	return f;
}	

int main(){
	phanso A, B;
	printf("Nhap phan so A:\n");
	nhap(&A);
	xuat(A); 
	printf("\nNhap phan so B:\n");
	nhap(&B);
	xuat(B);
    phanso C = tong(A,B);
    printf("\nTong hai phan so A + B = ");
    rutgon(&C);
    phanso D = hieu(A,B);
    printf("\nHieu hai phan so A - B = ");
    rutgon(&D);
    phanso E = tich(A,B);
    printf("\nTich hai phan so A * B = ");
    rutgon(&E);
    phanso F = thuong(A,B);
    printf("\nThuong hai phan so A / B = ");
    rutgon(&F);
    return 0;
}	
