int* getPointerToArray(int n){
    int *a = NULL;
    a = (int*) calloc(n,sizeof(int));
    int i;
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    return a;
}
