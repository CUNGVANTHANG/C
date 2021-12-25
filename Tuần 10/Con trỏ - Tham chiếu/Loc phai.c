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

void trim_right(char *s){
    int len = sokitu(s);
	int i = len -1;
	while(khoangtrang(s[i])){
		s[i] = '\0';
		i--;
	}	
}
