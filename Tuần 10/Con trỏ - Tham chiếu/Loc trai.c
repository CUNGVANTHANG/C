bool khoangtrang(char c){
	return c == ' ' || c == '\t' || c == '\n';
}

int sokitu(char *s){
    int i;
    for(i=0;*s!='\0';*s++){
        i++;
    }
    return i;
}

void trim_left(char *s){
    int S = 0;
	int i;
	int len = sokitu(s);
	for(i=0;i<len;i++){
		if(khoangtrang(s[i])){
			S++;
		}else{
			break;
		}	
	}
	
	for(i=0;i<=len-S;i++){
		s[i] = s[i+S];
	}	
}	
