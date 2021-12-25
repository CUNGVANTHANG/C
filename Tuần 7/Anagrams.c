char doi(char i){
    if(i >= 'A' && i <= 'Z') return i + 32;
}

int areAnagrams(char str1[], char str2[]){
    int dem = 0;
    int laidem = 0;
    for(int i = 0; i < strlen(str1); i++){
        int dem1 = 0;
        int dem2 = 0;
        if((str1[i] >= 'a' && str1[i] <= 'z') || (str1[i] >= 'A' && str1[i] <= 'Z')){
            for(int j = 0; j < strlen(str1); j++){
                if(doi(str1[i]) == doi(str1[j])) dem1 ++;
            }
            for(int j = 0; j <strlen(str2); j++){
                if(doi(str1[i]) == doi(str2[j])) dem2 ++;
            }
            if(dem1 == dem2) dem++;
            else return 0;
        }
    }
    return dem;
    for(int i = 0; i < strlen(str1); i++){
        if((str1[i] >= 'a' && str1[i] <= 'z') || (str1[i] >= 'A' && str1[i] <= 'Z')) laidem ++;
    }
    if(dem == laidem) return 1;
    else return 0;
}
