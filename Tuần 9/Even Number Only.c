int** keepEven (int** matrix, int nRows, int nCols){
    int i, j;
    for(i=0;i<nRows;i++){
        for(j=0;j<nCols;j++){
            if(matrix[i][j]%2!=0){
                matrix[i][j]=0;
            }
        }
    }
    return matrix;
}
