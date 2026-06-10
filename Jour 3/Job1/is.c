int is_digit(char c){
    if (c > 47 && c < 58){
        return 1;
    }
    return 0;
}

int is_lower(char c){
    if (c > 96 && c < 123){
        return 1;
    }
    return 0;
}

int is_upper(char c){
    if (c > 64 && c < 91){
        return 1;
    }
    return 0;
}

int is_alpha(char c){
    if ( is_lower(c) || is_upper(c)){
        return 1;
    }
    return 0;
}

int is_print(char c){
    if (c > 31 && c < 127){
        return 1;
    }
    return 0;
}
