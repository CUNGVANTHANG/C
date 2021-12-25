double* getSquare (double number){
    double *a = &number;
    *a = (*a) * (*a);
    return a;
}
