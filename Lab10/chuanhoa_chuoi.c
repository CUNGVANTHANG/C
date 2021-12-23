#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool khoangtrang(char c){
	return c == ' ' || c == '\t' || c == '\n';
}	

bool kitudacbiet(char c){
	return c == ',' || c == ':' || c == '(' || c == ')'
	|| c =='?' || c == ';' || c == '.' || c == '!';
}	

void dauxau(char *s){
	int S = 0;
	int i;
	int len = strlen(s);
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

void giuaxau(char *s){
	int i, j;
	int len = strlen(s);
	for(i = 0; i < len; i++) {
		if(khoangtrang(s[i]) && khoangtrang(s[i + 1])) {
			for(j = i + 1; j < len; j++) {
				s[j] = s[j + 1];
			}
			i--;
			len--;
		} else if(khoangtrang(s[i]) && kitudacbiet(s[i + 1])) {
			for(j = i; j < len; j++) {
				s[j] = s[j + 1];
			}
			i--;
			len--;
		} else if(s[i] == '\t') {
			s[i] = ' ';
		}
	}
}

void cuoixau(char *s){
	int len = strlen(s);
	int i = len -1;
	while(khoangtrang(s[i])){
		s[i] = '\0';
		i--;
	}	
}	

int demtu(char *s){
	int S =1;
	int i;
	int len = strlen(s);
	for(i=0;i<len;i++){
		if(!khoangtrang(s[i]) && khoangtrang(s[i+1])){
			S++;
		}	
	}
	return S;	
}	

int main(){
	char s[100];
	fgets(s,99,stdin);
	int a = strlen(s);
	printf("Do dai chuoi = %d\n", a);
	dauxau(s);
	giuaxau(s);
	cuoixau(s);
	int b = strlen(s);
	printf("%s", s);
	printf("\nDo dai chuoi = %d\n", b);
	printf("So luong tu trong chuoi = %d", demtu(s));
	return 0;
}	
