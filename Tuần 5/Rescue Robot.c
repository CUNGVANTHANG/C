#include <stdio.h>
#include<math.h>

int main(){
    int n;
    float a[100];
    float b[100];
    scanf("%d", &n);
    int am = 0;
    if(n >= 0){
        for(int i = 0; i < n; i++) scanf("%f", &a[i]);
        for(int i = 0; i < n; i++) if(a[i] < 0) am += 1;
        if(am == 0){
            for(int i = 0; i < n; i++) b[i] = a[i];
            for(int i = 0; i < n; i++){
                for(int j = i + 1; j < n; j++){
                    if(a[i] < a[j]) {
                        float doi = a[i];
                        a[i] = a[j];
                        a[j] = doi;
                    }
                }
            }
            int dem = 0;
            for(int i = 0; i < n; i++){
                if(a[i] > 0.05 && a[i] < 1){
                    a[i+1] = a[i+1] / pow(2, i + 1);
                    for(int j = 0; j < n; j++){
                        if(a[i] * pow(2, i) == b[j]) {
                            printf("%d ", j);
                            dem ++;
                        }
                    }
                }
                else if(a[i] < 0.05 && a[i] > 0) dem += 0;
                else {
                dem = -1;
                break;    
                }
            }
            if(dem == 0) printf("No one is alive.");
            if(dem == -1) printf("invalid");
            }
        else printf("invalid");
    }
    else printf("invalid"); 
    return 0;
}
