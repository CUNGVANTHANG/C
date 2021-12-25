#include <stdio.h>
#include <math.h>

int demso(int arr[], int n, int i){
    int dem1 = 0;
    int dem2 = 0;
    int doi = arr[i];
    for(int j = i; j < n; j++){
        if(arr[j] == doi){
            dem1 += 1;
            dem2 += 1;
        }
        else{
            if(arr[j] - doi == 1) dem1 += 1;
            if(arr[j] - doi == -1) dem2 += 1;
        }
    }
    return fmax(dem1, dem2);
}
int findLHS(int arr[], int n){
    int dem = demso(arr, n, 0);
    for(int i = 1; i < n; i++){
        if(demso(arr, n, i) > dem) dem = demso(arr, n, i);
    }
    return dem;
}


