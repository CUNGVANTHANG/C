double harmonic(int n){
    int i;
    double S =0;
    for(i=1;i<=n;i++){
        S = S + 1/(double)i;
    }
    return S;
}
