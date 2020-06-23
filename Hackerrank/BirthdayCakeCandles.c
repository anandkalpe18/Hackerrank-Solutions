int birthdayCakeCandles(int ar_count, int* ar) {
    int count=0,max=0;
    for(int i=0;i<ar_count;i++){
        if(max<ar[i])
        max=ar[i];
    }
    for(int i=0;i<ar_count;i++){
        if(ar[i]==max)
        count++;
    }
    return count;


}
