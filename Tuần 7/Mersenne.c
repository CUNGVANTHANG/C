bool isMersenne(int p){
	if(p==1){
		return false;
	}	
    int i, count=0, S =0;
    for(i=1;i<sqrt(p);i++){
        if(p%i==0){
            count++;
        }
    }
    if(count !=1) return false;
    unsigned int m = pow(2,p) - 1;
    for(i=1;i<sqrt(m);i++){
        if(m%i==0){
            S++;
        }
    }
    if(S!=1) return false;
    else{
         return true;
    }
   
}
