void readArray(int array[], int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d", &array[i]);
    }
}

int compareArray(int array1[], int array2[], int n){
    int i;
    for(i=0;i<n;i++){
        if(array1[i]!=array2[i])
        return 0;
    }
    return 1;
}
