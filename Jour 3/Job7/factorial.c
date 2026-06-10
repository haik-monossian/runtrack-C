int factorial(int n){
    int r = 1;
    if (n>1){
        r *= n;
        r *= factorial(n-1);

    }
    return r;
    
}