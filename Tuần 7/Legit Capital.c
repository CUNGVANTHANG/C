int isLegitCapital(char word[]){
    int i, S1 = 0, S2 =0;
    int n = strlen(word);
    for(i=0;i<n;i++){
        if(word[i]>=97 && word[i]<=122){
            S1++;
        }
        else if(word[i]>=65 && word[i]<=90){
            S2++;
        }
    }
   if(S1==n || S2 == n){
       return 1;
   }
    if(S1!=0 && S2==1){
       if(word[0]>=65 && word[0]<=90){
           return 1;
       }
       
   }
  if(S1!=0 && S2!=0){
       return 0;
   }
}
