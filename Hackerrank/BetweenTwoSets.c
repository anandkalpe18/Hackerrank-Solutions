int getTotalX(int a_count, int* a, int b_count, int* b) {
  
    int cnt = 0;
    for (int k=1; k<=100; k++)
    {
        int flag = 1;
        for (int i=0; i<a_count; i++)
            if (k % a[i] != 0)
                flag = 0;
        for (int i=0; i<b_count; i++)
            if (b[i] % k != 0)
                flag = 0;
        if (flag == 1)
            cnt ++;
    }
    return cnt;
    

}
