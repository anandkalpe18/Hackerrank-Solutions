int migratoryBirds(int arr_count, int* arr) {
     int f[5];
    for(int i=1;i<=5;i++)
    {
        int c=0;
        for(int j=0;j<arr_count;j++)
        {
            if(arr[j]==i)
            {
                c++;
            }
            f[i-1]=c;
        }
    }
    int max=f[0],loc=0;
    for(int k=1;k<5;k++)
    {
        if(f[k]>max)
        {
            max=f[k];
            loc=k;
        }
        
    }
    return (loc+1);
}
