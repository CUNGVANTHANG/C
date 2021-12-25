int getSum(int *a, int n){
    int i, S =0;
    for(i=0;i<n;i++){
        S = S + a[i];
    }
    return S;
}
