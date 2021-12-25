#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int max = (a>b)?a:b;
    max = (max>c)?max:c;
    max = (max>d)?max:d;
    max = (max>e)?max:e;
    int min = (a<b)?a:b;
    min = (min<c)?min:c;
    min = (min<d)?min:d;
    min = (min<e)?min:e;
    int max2;
    if(max2 < a && a != max){
    	max2 = a;
	}
	if(max2 < b && b != max){
    	max2 = b;
	}
	if(max2 < c && c != max){
    	max2 = c;
	}
	if(max2 < d && d != max){
    	max2 = d;
	}
	if(max2 < e && e != max){
    	max2 = e;
	}
    int max3;
    if(max3 < a && a != max2 && a != max){
    	max3 = a;
    }
    if(max3 < b && b != max2 && b != max){
    	max3 = b;
    }
    if(max3 < c && c != max2 && c != max){
    	max3 = c;
    }
    if(max3 < d && d != max2 && d != max){
    	max3 = d;
    }
    if(max3 < e && e != max2 && e != max){
    	max3 = e;
    }
	printf("%d", max3);
    
}	  
