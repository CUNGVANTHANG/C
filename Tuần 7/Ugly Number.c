int isUgly(int n){
   int S = 0;
    if(n % 2 == 0) S++;
    if(n % 3 == 0) S++;
    if(n % 5 == 0) S++;
    for(int i = 2; i < sqrt(n); i++){
        if(i % 2 != 0 && i % 5 != 0 && i % 3 != 0){
            if(n % i == 0) return 0;
        }
    }
    if(S != 0) return 1;
}
