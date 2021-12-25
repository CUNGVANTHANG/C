
int sokitu(char *s){
    int i;
    for(i=0;*s!='\0';*s++)
       i++;
    return i;
}

void reverse(char *s){
    int i;
    int len = sokitu(s);
    for(i=0;i<len/2;i++){
        char tmp = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = tmp;
    }
  
}


