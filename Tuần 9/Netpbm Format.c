void readHeader(const char* path){
    FILE *f;
    f = fopen(path, "r");
    char a[1000];
    fgets(a,1000,f);
    fclose(f);
    if(a[0]=='P' && a[1]>='1' && a[1]<='6'){
        printf("%c%c", a[0], a[1]);
    }
    else{
        printf("unknown filetype");
    }
}
