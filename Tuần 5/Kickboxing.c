#include<stdio.h>

int main(){
    int a[3];
    char so1[20]="Fly Weight", so2[20]="Super Fly Weight", so3[20]="Bantam Weight",so4[20]="Super Bantam Weight";
    char so5[20]="Feather Weight", so6[20]="Super Feather Weight", so7[20]="Light Weight", so8[20]="Super Light Weight", so9[20]="Welter Weight", so10[20]="Super Welter Weight";
    char so11[20]="Middle Weight", so12[20]="Super Middle Weight", so13[20]="Light Heavy Weight", so14[30]="Super Light Heavy Weight", so15[20]="Cruiser Weight", so16[20]="Super Cruiser Weight", so17[20]="Heavy Weight", so18[20]="Super Heavy Weight";
    scanf("%d", &a[3]);
  
  
    if(0<=a[3] && a[3]<=111){
    	printf("%s", so1);
    }
	if(112<=a[3] && a[3]<=114){
    	printf("%s", so2);
    }
    if(115<=a[3] && a[3]<=117){
    	printf("%s", so3);
    }
    if(118<=a[3] && a[3]<=121){
    	printf("%s", so4);
    }
    if(122<=a[3] && a[3]<=125){
    	printf("%s", so5);
    }
    if(126<=a[3] && a[3]<=129){
    	printf("%s", so6);
    }
    if(130<=a[3] && a[3]<=134){
    	printf("%s", so7);
    }
    if(135<=a[3] && a[3]<=139){
    	printf("%s", so8);
    }
    if(140<=a[3] && a[3]<=146){
    	printf("%s", so9);
    }
    if(147<=a[3] && a[3]<=153){
    	printf("%s", so10);
    }
    if(154<=a[3] && a[3]<=159){
    	printf("%s", so11);
    }
    if(160<=a[3] && a[3]<=166){
    	printf("%s", so12);
    }
    if(167<=a[3] && a[3]<=173){
    	printf("%s", so13);
    }
    if(174<=a[3] && a[3]<=182){
    	printf("%s", so14);
    }
    if(183<=a[3] && a[3]<=188){
    	printf("%s", so15);
    }
    if(189<=a[3] && a[3]<=197){
    	printf("%s", so16);
    }
    if(198<=a[3] && a[3]<=208){
    	printf("%s", so17);
    }
    if(a[3]==209){
    	printf("%s", so18);
    }
	else{
		printf("");
	}
	
	
		
}
