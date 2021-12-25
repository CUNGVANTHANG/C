#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c;
    scanf("%d/%d/%d", &a, &b, &c);
    if((b==4||b==6||b==9||b==11) && 1<=a && a<=30){
    	   printf("yes");
    	}
    else if((b==1||b==3||b==5||b==7||b==8||b==10||b==12)&& 1<=a && a<=31){
    	   printf("yes");
		}
    else if(c%4==0 && (c%100!=0||c%400==0) && b==2 && 1<=a && a<=29){
     	    printf("yes");
        } 
	else{
	
	     printf("no");
	}	
}    
