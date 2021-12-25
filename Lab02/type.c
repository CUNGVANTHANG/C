#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(){
    printf("Kich thuoc cua kieu char: %d byte", sizeof(char));
    printf("\nMIN to MAX: %d to %d", CHAR_MIN, CHAR_MAX);
  
    printf("\nKich thuoc cua kieu unsigned char: %d byte", sizeof(unsigned char));
    printf("\nMIN to MAX: 0 to %d", UCHAR_MAX);
   
    printf("\nKich thuoc cua kieu short: %d byte", sizeof(short));
    printf("\nMIN to MAX: %d to %d", SHRT_MIN, SHRT_MAX);
    
	printf("\nKich thuoc cua kieu int: %d byte", sizeof(int));
    printf("\nMIN to MAX: %d to %d", INT_MIN, INT_MAX);
   
    printf("\nKich thuoc cua kieu unsigned int: %d byte", sizeof(unsigned int));
    printf("\nMIN to MAX: 0 to %u", UINT_MAX);
   
    printf("\nKich thuoc cua kieu unsigned long: %d byte", sizeof(unsigned long));
    printf("\nMIN to MAX: 0 to %u", ULONG_MAX);
    
	printf("\nKich thuoc cua kieu float: %d byte", sizeof(float));
    printf("\nMIN to MAX: %d to %f", FLT_MIN, FLT_MAX);

    printf("\nThong tin may 64 bit");
    return 0;
}	
