#include<stdio.h>
#include<math.h>

unsigned int chinhphuong(unsigned int x){
        int a = sqrt(x);
        if(a*a== x){
        	
        	  return 1;
        }
      
		else
		  return 0;	
}	

int main(){
	int a, b, i;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	printf("Tat ca cac so chinh phuong trong doan tu %d den %d:\n", a, b);
	for(i=a;i<=b;i++){
		if(chinhphuong(i)==1){
			printf("%d, ", i);
		}	
	}	
}	
