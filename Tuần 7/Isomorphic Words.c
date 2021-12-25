int isIsomorphic(char a[], char b[]){
    for(int i = 0; i < strlen(a); i++){
        int x = a[i] - b[i];
        for(int j = 0; j < strlen(a); j++){
            if(a[i] == a[j] || b[i] == b[j]){
                int y = a[j] - b[j];
                if(x != y) return 0;
            }
        }
    }
    return 1;
}
