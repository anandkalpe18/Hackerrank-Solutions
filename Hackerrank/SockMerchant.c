int sockMerchant(int n, int ar_count, int* ar) {
    int count=0;
    for(int i=0;i<n;i++){
        if(ar[i]!=0){
        for(int j=i+1;j<n;j++){
            if(ar[i]==ar[j]){
                count++;
                ar[i]=0;
                ar[j]=0;
                break;
            }
        }
    }}
    ar_count=count;
    return ar_count;

}
