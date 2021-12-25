#include<stdio.h>

int main(){
    int a[20];
    int b[20];
    int i, n, c;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%d", &a[i]);
    }
    for(i=1;i<=n;i++){
        scanf("%d", &b[i]);
    }    
    for(i=1;i<=n;i++){
         
          if(b[i]!=a[i]){
              printf("NO");
	     return 0;
             
          }
         
	}
	   
	  
    for(i=1;i<=n;i++){    
        if(a[i] == b[i]){
            printf("YES");
            return 0;
        }
       
     
    }
}
