int pageCount(int n, int p) {
   
    
    int min=0;
    min=(n/2)-(p/2);
    if(min>p/2)
    min=p/2;
    return min;
}
