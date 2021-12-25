void normalize(double *out, int *in, int n){
    int i;
    for(i=0;i<n;i++){
        out[i] = (double)in[i]/255;
    }
   
}
