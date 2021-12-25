int circle(char moves[]){
    int len=strlen(moves);
    int i, S1=0, S2=0;
    for(i=0;i<len;i++){
        if(moves[i]=='L'){
            S1++;
        }
        if(moves[i]=='R'){
            S1--;
        }
        if(moves[i]=='U'){
            S2++;
        }
        if(moves[i]=='D'){
            S2--;
        }
    }
    if(S1==0 && S2==0){
        return 1;
    }else{
        return 0;
    }
    
}
