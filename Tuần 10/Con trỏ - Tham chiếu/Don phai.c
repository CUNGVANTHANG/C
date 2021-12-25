int sokitu(char *s){
    int i;
    for(i=0;*s!='\0';*s++)
        i++;
    return i;
}

void pad_right(char *s, int n){
    int i;
    int len = sokitu(s);
    if(len<n){
        int S = n - len;
        for(i=len;i<len+S;i++){
            s[i]='_';
        }
    }
}
