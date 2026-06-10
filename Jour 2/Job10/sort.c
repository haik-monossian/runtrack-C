int *sort(int *array) {
    int len = 0;
    while (array[len] != 0) {
        len++;
    }

    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    return array;
}

int *sort_int(int *array) {
    return sort(array);
}
