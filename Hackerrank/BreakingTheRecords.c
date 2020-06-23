int* breakingRecords(int scores_count, int* scores, int* result_count) {
    *result_count=2;
    int min=scores[0],max=scores[0],i;
    for(i=0;i<scores_count;i++)
    {
       if(min>scores[i])
       {
           min=scores[i];
           result_count[0]++;
       }
    }
    for(i=0;i<scores_count;i++)
            {
            if(max<scores[i])
            {
            max=scores[i];
            result_count[1]++;
            }
        }
        
        
    return result_count;


}
