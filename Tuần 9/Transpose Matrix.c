int** transpose (int** matrix, int m, int n){
    int hang = m;
    int cot = n;
    int **a;
    a = (int**) malloc (cot*sizeof(int*));
    int i, j;
    for(i=0;i<cot;i++){
        a[i] = (int*) malloc(hang*sizeof(int));
    }
    for(i=0;i<cot;i++){
        for(j=0;j<hang;j++){
            a[i][j] = matrix[j][i];
        }
    }
    return a;
}
