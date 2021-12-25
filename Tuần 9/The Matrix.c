int** inputMatrix(int nRows, int nCols){
    int **a;
    int dong = nRows;
    int cot = nCols;
    a = (int**) malloc(dong*sizeof(int*));
    int i, j;
    for(i=0;i<dong;i++){
        a[i]= (int*) malloc(cot*sizeof(int));
    }
    for(i=0;i<dong;i++){
        for(j=0;j<cot;j++){
            scanf("%d", &a[i][j]);
        }
    }
    return a;
    
}

void printMatrix(int** matrix, int nRows, int nCols){
    int dong = nRows;
    int cot = nCols;
    int i, j;
    for(i=0;i<dong;i++){
        for(j=0;j<cot;j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
