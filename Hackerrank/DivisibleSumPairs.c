int divisibleSumPairs(int n, int k, int ar_count, int* ar) {
      int counter=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j && (ar[i]+ar[j])%k==0){
                counter++;
            }
        }
    }
    ar_count=counter;
    return ar_count ;
}
