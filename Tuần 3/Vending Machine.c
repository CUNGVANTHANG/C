#include<stdio.h>
#include<math.h>

int main(){
    int a, c, d, e, f, g, h;
    char b;
    scanf("%d %c", &a, &b);
	switch(b){
		case 'C':
			c = 12000;
			if(a>=c){
				printf("Cocacola %d", a-c);}
			if(a<c){
			    printf("Con thieu %d de mua Cocacola", c-a);}
				break;	
		case 'P':
			d = 12000;
			if(a>=d){
				printf("Pepsi %d", a-d);}
			if(a<d){
			    printf("Con thieu %d de mua Pepsi", d-a);}
				break;		
		case '7':
			e = 11000;
				if(a>=e){
				printf("7up %d", a-e);}
			if(a<e){
			    printf("Con thieu %d de mua 7up", e-a);}
				break;	
		case 'S':
			f = 10000;
				if(a>=f){
				printf("Sprite %d", a-f);}
			if(a<f){
			    printf("Con thieu %d de mua Sprite", f-a);}
				break;	
		case 'F':
			g = 7000;
				if(a>=g){
				printf("Fanta %d", a-g);}
			if(a<g){
			    printf("Con thieu %d de mua Fanta", g-a);}
				break;	
		case 'L':
			h = 5000;
				if(a>=h){
				printf("Lavie %d", a-h);}
			if(a<h){
			    printf("Con thieu %d de mua Lavie", h-a);}
				break;	
	   	default:
			printf("%d", a);
			break;
			}
		
			 	
	
}	
