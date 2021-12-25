int isValid(char s[]){
    int n = strlen(s);
    int i;
    for(i=0;i<n;i++){
        if(s[i]=='{'){
            if(s[i+1]=='['){
                if(s[i+3]!='}' && s[i+2]==']' || s[i+2]=='(' && s[i+5]!='}'){
                    return 0;
                }
                    
            }
        }
        if(s[i]=='['){
            if(s[i+1]=='(' && s[i+3]!=']'){
                return 0;
            }
        }
        if(s[i]=='(' && s[i+1]!=')'){
            return 0;
        }
    }
    return 1;
}
