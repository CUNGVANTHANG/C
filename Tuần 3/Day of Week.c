#include<stdio.h>
#include<math.h>

int main(){
     int d, m, y, y0, x, m0, d0;
    scanf("%d %d %d", &d, &m, &y);
    y0 = y-(14-m)/12;
    x = y0 + y0/4 - y0/100 + y0/400;
    m0 = m+12*((14-m)/12)-2;
    d0 =(d+x+31*m0/12)% 7;
    if(d0 == 0){
        printf("Sunday");
    }
    if(d0 == 1){
        printf("Monday");
    }
    if(d0 == 2){
        printf("Tuesday");
    }
    if(d0 == 3){
        printf("Wednesday");
    }
    if(d0 == 4){
        printf("Thursday");
    }
    if(d0 == 5){
        printf("Friday");
    }
    if(d0 == 6){
        printf("Saturday");
    }
    
}
