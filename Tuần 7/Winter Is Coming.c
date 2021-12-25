int timekiem(int houses[], int nHouses, int heaters[], int nHeaters, int n){
    int x = heaters[0] - houses[n];
    if(x < 0) x = - x;
    for(int i = 0; i < nHeaters; i++){
        int y = heaters[i] - houses[n];
        if(y < 0) y = -y;
        if(y < x) x = y;
    }
    return x;
}

int findRadius(int houses[], int nHouses, int heaters[], int nHeaters){
    int arr[nHouses];
    for(int i = 0; i < nHouses; i++){
        arr[i] = timekiem(houses, nHouses, heaters, nHeaters, i); 
    }
    int max = arr[0];
    for(int i = 0; i < nHouses; i++){
        if(arr[i] > max) max = arr[i];
    }
    return max;
}
