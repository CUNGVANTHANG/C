bool canPlaceFlowers (int flowerbed[], int n, int k){
    int i, S =0;
    for(i=0;i<n;i++){
        if(flowerbed[i]==0 && flowerbed[i+1]==0 && flowerbed[i-1]==0){
            flowerbed[i]=1;
            k--;
        }
        if(i==n-1 && flowerbed[i]==0 && flowerbed[i-1]==0){
            k--;
        }
        if(k==0){
            return true;
        }
    }
    return false;
   
}
