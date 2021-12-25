int sotp(int a){
    int N =a;
    int s[100], count=0, S=0;
    while(a!=0){
        s[count]=a%10;
        a=a/10;
        count++;
    }
    int i;
    for(i=0;i<count;i++){
        if(s[i]==0){
            return 0;
        }
        if(N%s[i]!=0){
            return 0;
        }
    }
        return 1;
}

int* selfDividingNumbers(int left, int right, int* returnSize){
    int i, j=0;
    int *a = (int*) malloc(sizeof(int));
    for(i=left;i<right;i++){
        if(sotp(i)==1){
            a[j]=i;
            j++;
        }
    }
    *returnSize = j;
    return a;
}
