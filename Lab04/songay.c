#include<stdio.h>

int soNgayCuaThang(int thang, int nam){
	switch(thang){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		   return 31;
		case 4: case 6: case 9: case 11:
			return 30;
		case 2:
			return ((nam%400==0)||(nam%4==0 && nam%100!=0))?29:28;
		default:
		    return -1;
				
	}
}	

int main(){
	int ngay, thang, nam;
    	printf("Nhap thang, nam: ");
    	scanf("%d %d", &thang, &nam);
    if(thang<=12 && thang>=1 && nam>=1){
    printf("\nThang %d nam %d co %d ngay", thang, nam, soNgayCuaThang(thang, nam));
	}
	else{
		printf("invalid");
	}
	

}


