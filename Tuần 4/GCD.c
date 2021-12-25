#include<stdio.h>

int UCLN(int A, int B) {
 
    while(A * B != 0) {
        if (A > B) {
            A %= B;
        }else{
            B %= A;
        }
    }
    return A + B;
}

int main(){
	int A, B;
	scanf("%d %d", &A, &B);
	if(UCLN(A,B)>0)
	printf("%d", UCLN(A,B));
	if(UCLN(A,B)<0)
	printf("%d", -UCLN(A,B));
}	
