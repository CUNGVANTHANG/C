#include<stdio.h>
#include<math.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if((b == 3 && a<=31)
    ||(b == 6 && a<=21)
	||(3<b && b <6 )){
        printf("Spring");
    }
    if((b == 6 && a<=22 )
	||(b == 9 && a<=22)
	||(6<b && b<9)){
		printf("Summer");
	}
	if((b == 9 && a >=23)
	||(b == 12 && a <=21)
	||(9<b && b <12)){
	    printf("Autumn");
	}
	if((b == 12 && a >= 22)
	||(b == 3 && a <=20)
	|(b == 12 && b == 1 && b == 2 & b == 3)){
		printf("Winter");
	}	
			
}
