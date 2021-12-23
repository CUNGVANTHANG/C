#include<stdio.h>
#include<math.h>

struct sophuc{
	float thuc;
	float ao;
};

typedef struct sophuc SP;

void nhap(SP *a){
	printf("Phan thuc: ");
	scanf("%f", &(a->thuc));
	printf("Phan ao: ");
	scanf("%f", &(a->ao));
}	

void xuat(SP a){
	printf("%.2f + %.2fi", a.thuc, a.ao);
}	

SP tong(SP A, SP B){
	struct sophuc C;
	C.thuc=A.thuc+ B.thuc;
	C.ao= A.ao + B.ao;
	return C;
}	

SP hieu(SP A, SP B){
	struct sophuc D;
	D.thuc=A.thuc- B.thuc;
	D.ao= A.ao - B.ao;
	return D;
}	

SP tich(SP A, SP B){
	struct sophuc E;
	E.thuc=A.thuc*B.thuc- A.ao*B.ao;
	E.ao=A.thuc*B.ao+A.ao*B.thuc;
	return E;
}	

SP thuong(SP A, SP B){
	struct sophuc F;
    struct sophuc Blienhop;
    Blienhop.thuc=B.thuc;
    Blienhop.ao=-B.ao;
    struct sophuc tichtrentu = tich(A, Blienhop);
    float mau = B.thuc*B.thuc + B.ao*B.ao;
    F.thuc = tichtrentu.thuc/ mau;
    F.ao = tichtrentu.ao/ mau;
    return F;
}	

float modul(SP a){
	return sqrt(a.thuc*a.thuc+a.ao*a.ao);
} 

float argument(SP a){
	return acos(a.thuc/modul(a));
}	

int main(){
	SP A, B;
	printf("Nhap so phuc A: \n");
	nhap(&A);
	printf("So phuc A = ");
	xuat(A);
	printf("\nNhap so phuc B: \n");
	nhap(&B);
	printf("So phuc B = ");
	xuat(B);
	//
	printf("\n\n");
	printf("C = ");
	SP C = tong(A, B);
	printf("A + B = ");
	xuat(C);
	//
	printf("\n");
	printf("D = ");
	SP D = hieu(A, B);
	printf("A - B = ");
	xuat(D);
	//
	printf("\n");
	printf("E = ");
	SP E = tich(A, B);
	printf("A * B = ");
	xuat(E);
	//
	printf("\n");
	printf("F = ");
	SP F = thuong(A, B);
	printf("A / B = ");
	xuat(F);
	//
	printf("\nModul A = %.2f", modul(A));
	printf("\nModul B = %.2f", modul(B));
	printf("\nArgument A = %.2f", argument(A));
	printf("\nArgument B = %.2f", argument(B));
}	
