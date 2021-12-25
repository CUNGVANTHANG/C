#include<stdio.h>

int main(){
    int a[9];
    int i, b, c;
    int dau = 3;
    int duoi = 3;
    for(i=1;i<=9;i++){
        scanf("%d", &a[i]);
    }
    for(i=1;i<=9;i++){
    	if(a[i]<0 || a[i]>4){
    		printf("invalid attack");
    		return 0;
       }
    }  
	   
	   
    for(i=1;i<=9;i++){
        if(1<=a[i]&& a[i]<=4){
            
        if(a[i]==1){
        dau = dau + 0;
      }
        if(a[i]==2){
        duoi = duoi + 1;
      }
        if(a[i]==3){
        dau = dau - 2;
      }
        if(a[i]==4){
        duoi = duoi -1;
        dau = dau + 1;
       
      }
       
        if(a[i]==3 && a[i+1] ==4 && a[i+2]==4 || a[i]==4 && a[i+1]==4 && a[i+2]==4){
            printf("invalid attack");
            return 0;
        }
    }
		b= dau;
        c = duoi;
        
	     
    }
       if(b==0 && c>=0){
       	  printf("You slayed the Dragon.");
       }
	   else if(b>0 && c>=0){
	   	  printf("You die.");
	   }
	   else if(b<0 || c<0){
	   	  printf("invalid attack");
	   }	
   
    
    
    
    
    
    
}
