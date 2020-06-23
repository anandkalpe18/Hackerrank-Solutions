int simpleArraySum(int ar_count, int* ar) {
    
    int i,sum=0;
    while(i!=ar_count){
        sum = sum + ar[i];
        i++;
    }
    return sum;
}
