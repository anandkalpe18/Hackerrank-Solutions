void bonAppetit(int bill_count, int* bill, int k, int b) {
    int sum=0,sumT=0;
    for(int i=0;i<bill_count;i++){
        if(i==k)
        continue;
        
        sum=sum+bill[i];
        
    }
    for(int i=0;i<bill_count;i++){
        sumT=sumT+bill[i];
    }
   
    if(b==sum/2){
        printf("Bon Appetit");
    }
    else{
        printf("%d",(sumT-sum)/2);
    }

}
