int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2){
    int m = lenArr1;
    int n = lenArr2;
    int p = m+n;
    int *c = NULL;
    c = (int*) malloc (p*sizeof(int));
    int i = 0, j =0, k =0;
    if(firstArr[i]<firstArr[i+1]){
        while(i<m || j<n){
		      if(i<m && j<n){
			       if(*(firstArr+i)<*(secondArr+j)){
				       *(c+k) = *(firstArr+i);
				       k++;i++;
		           }
			       else{
			    	 *(c+k)=*(secondArr+j);
				     k++;j++;
			       }	
		      }else{
		        	if(i<m && j>=n){
			        	*(c+k)=*(firstArr+i);
			        	k++;i++;
			        }	
			        else if(j<n && i>=m){
			    	    *(c+k)=*(secondArr+j);
			        	k++;j++;
			        }	
		       }	
	    }	
         return c;
    }else{
         while(i<m || j<n){
		      if(i<m && j<n){
			       if(*(firstArr+i)>*(secondArr+j)){
				       *(c+k) = *(firstArr+i);
				       k++;i++;
		           }
			       else{
			    	 *(c+k)=*(secondArr+j);
				     k++;j++;
			       }	
		      }else{
		        	if(i<m && j>=n){
			        	*(c+k)=*(firstArr+i);
			        	k++;i++;
			        }	
			        else if(j<n && i>=m){
			    	    *(c+k)=*(secondArr+j);
			        	k++;j++;
			        }	
		       }	
	    }	
         return c;
    }
	
}
