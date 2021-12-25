int hammingDistance(int x, int y){
    if(x==y){
        return 0;
        
    }
    int count = 0;
    if(x>y){
        while(x!=0){
            if(x%2!=y%2){
                count++;
            }
            x = x/2;
            y = y/2;
        }
    }
    else{
        while(y!=0){
           if(x%2!=y%2){
                count++;
            }
            x = x/2;
            y = y/2;
        }
    }
    return count;
}
