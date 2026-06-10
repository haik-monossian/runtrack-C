int fibonacci_it(int n){
    int a = 1;
    int b = 0;

    int r = 0;
    while(n>0){
        r = a + b;
        b = a;
        a = r;

        n--;
    }
    return b;
}

int fibonacci_rec(int n){
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    
    return fibonacci_rec(n - 1) + fibonacci_rec(n - 2);
}
