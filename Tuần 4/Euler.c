#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    long long int a, b, c, d, e;
    for(e = 1; e <= n; e++){
        for(d = 1; d <= e; d++){
            for(c = 1; c <= d; c++){
                for(b = 1; b <= c; b++){
                    for(a = 1; a <= b; a++){
                        if(a*a*a*a*a + b*b*b*b*b + c*c*c*c*c + d*d*d*d*d == e*e*e*e*e)
                            printf("%lld^5 + %lld^5 + %lld^5 + %lld^5 = %lld^5", a, b, c, d, e);
                    }
                }
            }
        }
    }
    return 0;
}
