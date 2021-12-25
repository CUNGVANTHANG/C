#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c, d, denta, x1, x2;
    printf("Nhap a = ");
      scanf("%f", &a);
    printf("\nNhap b = ");
      scanf("%f", &b);
    printf("\nNhap c = ");
      scanf("%f", &c);
    d = sqrt(-c/a); 
    denta = b*b - 4*a*c;
    x1 = (-b + sqrt(denta))/2*a;
    x2 = (-b - sqrt(denta))/2*a;
    if(a==0 && b!=0 && c!=0){
        printf("phuong trinh co 1 nghiem\n%.5f", -c/b);
    }
    else if(a==0 && b==0 && c!=0){
        printf("phuong trinh vo nghiem");
    }
    else if(a!=0 && b==0 && c<0){
        printf("phuong trinh co 2 nghiem\n%.5f %.5f", -d, d);
    }
    else if(a!=0 && b==0 && c==0){
        printf("phuong trinh co 1 nghiem\n%.5f", 0/a);
    }
    else if(a!=0 && b==0 && c>0){
        printf("phuong trinh vo nghiem");
    }
    else if(a==0 && b==0 && c==0){
        printf("phuong trinh co vo so nghiem");
    }
    else if(a!=0 && b!=0 && c!=0 && denta >0){
        printf("phuong trinh co 2 nghiem\n%.5f %.5f", x2, x1 );
    }
    else if(a!=0 && b!=0 && c!=0 && denta==0){
        printf("phuong trinh co 1 nghiem\n%.5f", -b/2*a);
    }
    else if(a!=0 && b!=0 && c!=0 && denta <0){
    	printf("phuong trinh vo nghiem");
    }	
    
}
