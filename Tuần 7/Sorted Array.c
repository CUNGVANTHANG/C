void sort(float array[], int size, bool isAscending){
    int i, j;
   if(isAscending == true){
       for(i=0;i<size;i++){
           for(j=i+1;j<size;j++){
               if(array[i]>array[j]){
                   float tmp = array[i];
                   array[i]=array[j];
                   array[j]=tmp;
               }
               
           }
       }
   } 
   else{
       for(i=0;i<size;i++){
           for(j=i+1;j<size;j++){
               if(array[i]<array[j]){
                   float tmp = array[i];
                   array[i]=array[j];
                   array[j]=tmp;
               }
           }
       }
   }
}
