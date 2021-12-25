void inputMatrix(int** matrix, int nRows, int nCols){
    int i, j;
    for(i=0;i<nRows;i++){
        for(j=0;j<nCols;j++){
            scanf("%d", &matrix[i][j]);
        }
    }
}
int isSymmetric(int** matrix, int nRows, int nCols){
    int i, j;
    if(nRows != nCols){
        return 0;
    }
    for(i=0;i<nRows;i++){
        for(j=0;j<nCols;j++){
            if(matrix[i][j] != matrix[j][i]){
                return 0;
            }
        }
    }
    return 1;
}
