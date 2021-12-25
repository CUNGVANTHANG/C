#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c, d, e, h, max, min, S, S1;
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &h);
    max =(a>b)?a:b;
    max =(max>c)?max:c;
    max =(max>d)?max:d;
    max =(max>e)?max:e;
    max =(max>h)?max:h;  

    min =(a<b)?a:b;
    min =(min<c)?min:c;
    min =(min<d)?min:d;
    min =(min<e)?min:e;
    min =(min<h)?min:h;
    S = (a+b+c+d+e+h-max-min)/4;
    if(a!=0 && b!=0 && c!=0 && d!=0 && e!=0 && h!=0){
    	printf("%0.1f", S);
    }
    
}


