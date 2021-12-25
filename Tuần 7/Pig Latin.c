char* pigLatin(char word[]){
    // nguyen am "ueoai"
    int i;
    int len = strlen(word);
    if(word[0]=='u' || word[0]=='e' || word[0]=='o' || word[0]=='a' || word[0]=='i'){
        word[len]='w';
        word[len+1]='a';
        word[len+2]='y';
        return word;
    }else{
        char S = word[0];
        for(i=0;i<len;i++){
            if(i<len-1){
                word[i]=word[i+1];
            }
            else{
                word[i]=S;
            }
        }
        word[len]='a';
        word[len+1]='y';
        return word;
    }
}
