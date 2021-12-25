#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int a[100], b[100];

int calc(char *s){
	int S = 0;
	int i, j, k;
	char t;
	for(i=0;s[i]!='\0';i++){
		for(j=i+1;s[j]!='\0';j++){
			for(t='a';t<='z';t++) a[t-'a'] = b[t-'a']=0;
			for(k=0;s[i+k]!='\0' && s[j+k] !='\0';k++){
				a[s[i+k]-'a']++;
				b[s[j+k]-'a']++;
			
			// check
			bool check = true;
			for(t='a';t<='z';t++){
				if(a[t-'a']!=b[t-'a']){
					check = false;
					break;
				}	
			}
			if(check) S++;
			}	
		}	
	}
	return S;	
}	

int main(){
	int n, a[100];
	scanf("%d", &n);
    char s[100][100];
    int i;
    for(i=0;i<n;i++){
    	scanf("%s", &s[i]);
    	a[i] = calc(s[i]);
    }	
    for(i=0;i<n;i++){
    	printf("%d\n", a[i]);
    }	
}	
