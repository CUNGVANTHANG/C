double* getPointerToPi(){
    double *a = NULL;
    a = (double*) malloc(sizeof(double));
    *a = 3.14159;
    return a;
}
