void rotate(int arr[], int n, int k){
    int i, a[200];
    for(i=0;i<n;i++){
        if(i+k<=n-1){
            a[i+k]=arr[i];
        }
        if(i+k>n-1){
            a[i+k-n]=arr[i];
        }
    }
    for(i=0;i<n;i++){
        arr[i]=a[i];
    }
}
