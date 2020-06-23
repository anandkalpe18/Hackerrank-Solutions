void miniMaxSum(int arr_count, int* arr) {
    long long tot = 0;
    long long max = 0;
    long long min = 1000000000;
    int i;
    for (i = 0; i < 5; ++i) {
        tot += arr[i];
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("%lld %lld", tot-max, tot-min);
}
