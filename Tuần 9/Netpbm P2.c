void printImage(const char* path){
    FILE *f;
    f = fopen(path,"r");
    int dai, rong;
    int max;
    char s[100];
    fgets(s,100,f);
    fscanf(f, "%d", &rong);
    fscanf(f, "%d", &dai);
    fscanf(f, "%d", &max);
    int a;
    int i=0;
    max = max/2;
    while(fscanf(f, "%d", &a) != EOF){
        if(a<max){
            printf(".");
            
        }
        else{
            printf("*");
        }
        i++;
        if(i==rong){
            printf("\n");
            i=0;
        }
    }
    fclose(f);
}
