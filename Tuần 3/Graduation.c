#include<stdio.h>
#include<math.h>

int main(){
    float a;
    scanf("%f", &a);
    if(a > 3.5){
        printf("Xuat sac");
    }
     if(3.2 <= a && a < 3.5){
        printf("Gioi");
    }
     if(2.5 <= a && a <3.2){
        printf("Kha");
    }
     if(2.0 <= a && a <2.5){
        printf("Trung binh");
    }
     if(2.0 > a){
        printf("Khong ra duoc truong");
    }
}
