void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int* apples, int oranges_count, int* oranges) {
    int count1=0,count2=0;
    for(int i=0;i<apples_count;i++){
        if(apples[i]+a>=s&&apples[i]+a<=t){
            count1++;
            
        }
        
    }
    for(int i=0;i<oranges_count;i++){
        if(oranges[i]+b>=s&&oranges[i]+b<=t){
            count2++;
        }
    }
    printf("%d\n%d",count1,count2);
    


}
