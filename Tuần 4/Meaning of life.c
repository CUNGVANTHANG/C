#include<stdio.h>

int main(){
    int n;
    int i,a[10];
    scanf("%d", &n);
   for(i=1;i<=n;i++){
	   scanf("%d", &a[i]);
    if(a[i]==42){
        printf("I've found the meaning of life!");
        break;
    }
    }
    if(a[i]!=42){
        printf("It's a joke!");
    }
  
        return 0;
}
