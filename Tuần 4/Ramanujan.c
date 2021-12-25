#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int sosanh = 0;
    for(int i = 1; i*i*i <= n; i++){
        for(int j = 2; j*j*j <= n; j++){
            if(i < j){
                int x1 = pow(i, 3) + pow(j, 3);
                for(int g = 1; g*g*g <= n; g++){
                    for(int h = 2; h*h*h <= n; h++){
                        if(g < h && x1 > sosanh){
                            int x2 = pow(g, 3) + pow(h, 3);
                            if(i != g && j != g && x2 == x1){
                                sosanh = x1;
                                printf("%d ", x1); 
                            }
                        }
                    }
                }                
            }
        }
    }
    return 0;
}
