#include<stdio.h>
#include<math.h>

int main(){
    double a[20];
    int i, n;
    double S = 0;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%lf", &a[i]);
    }
    for(i=1;i<=n;i++){
        S = S + a[i];
    }
    double tB= S/n;
    double tong = 0;
    for(i=1;i<=n;i++){
        tong = tong + (a[i]-tB)*(a[i]-tB);
    }
    double phuongSai = sqrt(tong/n);
    double chuanHoa;
    for(i=1;i<=n;i++){
        chuanHoa = (a[i]-tB)/phuongSai;
         printf("%.2lf ", chuanHoa);
    }
      
}
