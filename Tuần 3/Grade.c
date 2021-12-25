#include<stdio.h>
#include<math.h>

int main(){
    float a;
    scanf("%f", &a);
    if(9 <= a && a <= 10){
        printf("A+");
    }
     if(8.5 <= a && a <= 8.9){
        printf("A");
    }
     if(8 <= a && a <= 8.4){
        printf("B+");
    }
     if(7 <= a && a <= 7.9){
        printf("B");
    }
     if(6.5 <= a && a <= 6.9){
        printf("C+");
    }
     if(5.5 <= a && a <= 6.4){
        printf("C");
    }
     if(5 <= a && a <= 5.4){
        printf("D+");
    }
     if(4 <= a && a <= 4.9){
        printf("D");
    }
     if(4 > a){
        printf("F");
    }
    
}
