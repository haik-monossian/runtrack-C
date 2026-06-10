int power(int n, int power){
    int i = 1;
    int base_n = n;
    if (power == 0){
        return n = 1;
    }
    else{
        while(power>i){
            n = base_n*n;
            i++;
        }
    return n;
    }

}