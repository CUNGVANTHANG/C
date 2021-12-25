int* isHigher (int* arr, int num, int thres){
    int i;
    for(i=0;i<num;i++){
        if(arr[i]<thres){
            arr[i]=0;
        }
        else if(arr[i]>=thres){
            arr[i]=1;
        }
    }
    return arr;
}
