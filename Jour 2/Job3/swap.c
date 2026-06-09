void swap(int *a, int *b){
    int data_save = *a;
    *a = *b;
    *b = data_save;
}