#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Sinhvien{
	char hoten[100];
	struct ngaysinh{
		int ngay, thang, nam;
	}ns;
	float tin;
	float toan;
	float TA;
}sinhvien;

void Nhap(sinhvien a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("\nNhap du lieu cho sinh vien %d: \n", i+1);
		printf("Nhap ho va ten cua sinh vien: "); fflush(stdin);
		gets(a[i].hoten);
		printf("Nhap ngay sinh cua sinh vien: "); fflush(stdin);
		scanf("%d/%d/%d", &a[i].ns.ngay, &a[i].ns.thang, &a[i].ns.nam);
		printf("Nhap diem thi tin cua sinh vien: "); fflush(stdin);
		scanf("%f", &a[i].tin);
		printf("Nhap diem thi toan cua sinh vien: "); fflush(stdin);
		scanf("%f", &a[i].toan);
		printf("Nhap diem thi tieng anh cua sinh vien: "); fflush(stdin);
		scanf("%f", &a[i].TA);
	}	
}

float DiemTB(sinhvien sv){
	float TB = (sv.tin+sv.toan+sv.TA)/3;
	return TB;
}

char *XepLoai(sinhvien sv){
	float TB = (sv.tin+sv.toan+sv.TA)/3;
	if(TB>=9){
		return "Xuat sac";
	}	
	else if(8<=TB){
		return "Gioi";
	}	
	else if(6.5<=TB){
		return "Kha";
	}	
	else if(5<=TB){
		return "Trung binh";
	}	
	else{
		return "Yeu";
	}
}	
	

void XuatN(sinhvien a[],int n){
	int i;	
	
	printf("--------------------THONG TIN SINH VIEN---------------\n");
	printf("%-20s %-20s %-10s %-10s %-10s %-20s %-10s\n", "Ho va ten", "Ngay sinh", "Tin", "Toan", "Anh", "Trung binh", "Xep loai"); // %-20s %-20s
	for(i=0;i<n;i++){
		printf("%-20s %02d/%02d/%-14d %-10.2f %-10.2f %-10.2f %-20.2f %-10s\n", a[i].hoten, a[i].ns.ngay, a[i].ns.thang, a[i].ns.nam, a[i].tin, a[i].toan, a[i].TA, DiemTB(a[i]), XepLoai(a[i]));
	}	
	
}

void Xuat(sinhvien a){
	printf("%-20s %-20s %-10s %-10s %-10s %-20s %-10s\n", "Ho va ten", "Ngay sinh", "Tin", "Toan", "Anh", "Trung binh", "Xep loai"); 
	printf("%-20s %02d/%02d/%-14d %-10.2f %-10.2f %-10.2f %-20.2f %-10s\n", a.hoten, a.ns.ngay, a.ns.thang, a.ns.nam, a.tin, a.toan, a.TA, DiemTB(a), XepLoai(a));
}	

void Tim(char ht[], sinhvien a[], int n){
	int i,j, S = 0;
	for(i=0;i<n;i++){
		if(strcmp(a[i].hoten, ht) == 0){
		    S++;
		    j= i;
		}	
	}	
	if(S==1){
		Xuat(a[j]);
	}
	else{
		printf("\nKhong tim thay\n");
	}	
}	

void HoanVi(sinhvien *sv1, sinhvien *sv2){
	sinhvien tmp;
	tmp = *sv1;
	*sv1 = *sv2;
	*sv2 = tmp;
}

void SapXep(sinhvien *sv, int n){
	int i, j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(sv[i].tin < sv[j].tin){
				HoanVi(&sv[i], &sv[j]);
			}	
		}	
	}	
}	

void xoak(sinhvien *a, int n, int k){
	int i;
	for(i=k-1;i<n-1;i++){
		a[i]=a[i+1];
	}	
}

void xoasinhvien(sinhvien *a, int n){
	char s[100];
	int k, S =0;
	printf("\nNhap ten can xoa: "); fflush(stdin);
	gets(s);
	int i;
	for(i=0;i<n;i++){
		if(strcmp(a[i].hoten, s) == 0 ){
			S++;
		}	
	}	
	if(S==1){
		xoak(a,n,k);
		n =n-1;
		XuatN(a,n);
	}	
	else if(S==0){
		XuatN(a,n);
	}
	
}	

int main(){
	sinhvien a[100];
    int n;
    int nhapdung = 1;
    printf("***************************************************\n");
    printf("***************************************************\n");
    printf("*       1. Nhap du lieu n sinh vien               *\n");
    printf("*       2. Xuat du lieu sinh vien                 *\n");
    printf("*       3. Tim sinh vien theo ten                 *\n");
    printf("*       4. Sap xep sinh vien theo diem tin        *\n");
    printf("*       5. Xoa sinh vien thu k                    *\n");
    printf("*       6. Xoa sinh vien theo ten                 *\n");
    printf("*       7. Thoat chuong trinh                     *\n");
    printf("***************************************************\n");
    printf("***************************************************\n");
    while(nhapdung != 0){
        int key;
        scanf("%d", &key);
        switch (key)
        {
            case 1:
            {
                printf("Nhap so luong sinh vien: ");
                scanf("%d", &n);
                Nhap(a, n);
                getch();
                break;
            }
            case 2:
            {
                XuatN(a, n);
                getch();
                break;
            }
            case 3:
            {
                char ht[100];
                printf("Nhap ten sinh vien can tim: "); 
                fflush(stdin); gets(ht);
                Tim(ht, a, n);
                getch();
                break;
            }
            case 4:
            {
            	printf("\nDanh sach sap xep sinh vien theo diem tin: ");
                SapXep(a, n);
                XuatN(a,n);
                getch();
                break;
            }
            case 5:
            {
                int k;
                printf("Nhap so thu tu sinh vien can xoa: ");
                scanf("%d", &k);
                xoak(a, n, k);
                n = n - 1;
                XuatN(a,n);
                getch();
                break;
            }
            case 6:
            {
                xoasinhvien(a, n);
                getch();
                break;
            }
            default:
            {
                nhapdung = 0;
                break;
            }
        }
    }
    return  0;
}
