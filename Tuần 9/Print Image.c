void printImage(int** img, int height, int width){
    int i, j;
    for(i=0;i<height;i++){
        for(j=0;j<width;j++){
            printf("%4d", img[i][j]);
        }
        printf("\n");
    }
}
