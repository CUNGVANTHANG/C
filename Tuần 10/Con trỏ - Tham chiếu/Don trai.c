int sokitu(char *s){
    int i;
    for(i=0;*s!='\0';*s++){
        i++;
    }
    return i;
}


void pad_left(char *s, int n){
    int i, j;
    int len = sokitu(s);
    if(len<n){
        int S = n - len;
        len = len + S;
        for(i=len;i>=0;i--){
            if(i>=S){
                s[i]=s[i-S];
            }
            if(i<S){
                s[i]='_';
            }
        }
    }
}


