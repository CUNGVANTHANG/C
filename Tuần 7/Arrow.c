void printArrow(int n, int left){
    int x = 2 * n - 1;
    if(left == 0){
        int a = 1;
        int b = 1;
        for(int i = 1; i <= x; i++){
            if(i <= n){
                for(int j = 1; j <= x; j++){
                    if(j >= a && j <= n + i - 1) printf("*");
                    else printf(" ");
                }
                a += 2;
            }
            else{
                for(int j = 1; j <= x; j++){
                    if(j >= x - 2 * b && j <= x - b) printf("*");
                    else printf(" ");
                }
                b += 1;
            }
            printf("\n");
        }
    }
    else{
        int a = 1;
        int b = 2;
        for(int i = 1; i <= x; i++){
            if(i <= n){
                for(int j = 1; j <= x; j++){
                    if(j <= x - a + 1 && j > n - i) printf("*");
                    else printf(" ");
                }
                a += 2;
            }
            else{
                for(int j = 1; j <= x; j++){
                    if(j > i - n && j <= i - n + b) printf("*");
                    else printf(" ");
                }
                b += 1;
            }
            printf("\n");
        }
    }
}
