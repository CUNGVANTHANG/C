#include<stdio.h>
#include<math.h>
#include<float.h>
#include<string.h>
char a[10], b[10];
int c, d;

int main(){
   scanf("%s %s", &a, &b);
   if(strcmp(a,"A")==0 && (strcmp(b,"A"))==0)
   	           printf("2");
   	
    else{
    	if(strcmp(a, "10")==0)
    	c=c+10;
    	else if(a[0]<='9')
    	c=c+a[0]-48;
    	else if(a[0]=='J'||a[0]=='Q'||a[0]=='K')
    	c=c+10;
    	else if(a[0]=='A')
    	c=c+11;
    	
    	if(strcmp(b,"10")==0)
    	c=c+10;
    	else if(b[0]<='9')
    	c=c+b[0]-48;
    	else if(b[0]=='J'||b[0]=='Q'||b[0]=='K')
    	c=c+10;
    	else if(b[0]=='A')
    	c=c+11;
    	printf("%d", c);
	}
    
}
