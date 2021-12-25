#include<stdio.h>

void nhap(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}

void hienThi(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }
}

void sapXepTang(int a[], int n){
    int i, j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
           if(a[i]>a[j]){
               int tmp = a[i];
               a[i]=a[j];
               a[j]=tmp;
            }
        }
	}
}	

void sapXepGiam(int a[], int n){
    int i, j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
           if(a[i]<a[j]){
               int tmp = a[i];
               a[i]=a[j];
               a[j]=tmp;
            }
        }
	}
}	    

void tach(int a[], int n){
    int i, S1 = 0, S2 = 0, b[100], c[100], d[100];
    for(i=0;i<n;i++){
    	if(a[i]%2==0){
    		b[S1]=a[i];
    		S1 = S1 + 1;
    	}
		else if(a[i]%2!=0){
			c[S2]=a[i];
			S2 = S2 + 1;
		}	
    }
    sapXepTang(b,S1);
    sapXepGiam(c,S2);
	for(i=0;i<n;i++){
		if(i<S1){
			d[i]= b[i];
		}
		else{
			d[i]= c[i-S1];
		}	
		
	}	
	hienThi(d,n);
    
}   

int main(){
    int a[100];
    int n;
    scanf("%d", &n);
    nhap(a,n);
    tach(a,n);
    
    
}
