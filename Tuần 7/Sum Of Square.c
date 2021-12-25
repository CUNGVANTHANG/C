bool judgeSquareSum (int number){
    int i, j;
    for(i=0;i<sqrt(number);i++){
        for(j=i+1;j<sqrt(number);j++){
            if(number == i*i + j*j){
                return true;
            }
        }
    }
    return false;
}
