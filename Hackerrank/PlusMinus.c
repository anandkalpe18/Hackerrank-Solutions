void plusMinus(int arr_count, int* arr) {
    double plus=0,minus=0,zero=0;
    for(int i=0;i<arr_count;i++){
        if(arr[i]>0)
        plus++;
        else if(arr[i]<0)
        minus++;
        else
        zero++;
    }
    printf("%f\n",plus/arr_count);
    printf("%f\n",minus/arr_count);
    printf("%f\n",zero/arr_count);
    


}
