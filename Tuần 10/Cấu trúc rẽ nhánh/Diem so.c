#include<stdio.h>

void nhap(float a[]){
    int i;
    for(i=1;i<=10;i++){
        scanf("%f", &a[i]);
    }
}

void tong(float a[]){
    int i;
    float  x, y, z, t;
    float S =0, tB;
	scanf("%f %f", &x, &y);
	scanf("%f %f", &z, &t);
    for(i=1;i<=5;i++){
        S = S + a[i];
    }
      tB = S/5;
      float TK = 0.2*tB+0.2*((x+y)/2)+0.6*(z+t);
      if(TK<=10){
          printf("%.1f", TK);
      }
      else{
          printf("10.0");
      }
      
}

void sapXep(float a[]){
    int i, j;
    for(i=1;i<=10;i++){
        for(j=i+1;j<=10;j++){
            if(a[i]<a[j]){
                int tmp;
                tmp = a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    
}

int main(){
	float a[10];
	int i, j;
	
	int TH, count = 0;
	float x, y, z, t, tB;
	scanf("%d", &TH);
	nhap(a);
    for(i=1;i<=10;i++){
        if(a[i]==0){
            count = count + 1;
        }
    }
    if(count>=6){
        printf("0.0");
    }
    else{
        sapXep(a);
	tong(a);
    }

	
	
}	
