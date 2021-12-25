int isHappyNumber(int n){
    int i=0;
    int x=0;
    while(i<100){
        int a = n;
        while(a>0){
            x = x + (a%10)*(a%10);
            a = a/10;
        }
        if(x==1){
            return 1;
            break;
        }
        else{
            n = x;
            x = 0;
            i++;
        }
    }
    return 0;
}



      
   

