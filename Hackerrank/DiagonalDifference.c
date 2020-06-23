int diagonalDifference(int arr_rows, int arr_columns, int** arr) {

    int i,j,sum1=0,sum2=0,sum;
      for(i=0;i<arr_rows;i++)
         sum1=sum1+arr[i][i];        
        for(i=0;i<arr_rows;i++)
         sum2=sum2+arr[i][arr_rows-1-i];
    sum=abs(sum1-sum2);
    return sum;
}
