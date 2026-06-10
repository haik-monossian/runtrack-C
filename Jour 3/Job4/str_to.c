#include "..\Job2\to.c"
#include "..\Job1\is.c"

void str_to_lower(char *s){
    int i=0;

    while (s[i] != '\0') {

        if (is_upper(s[i])){
            s[i] = to_lower(s[i]);
        }

        i++;
    }
}

void str_to_upper(char *s){
    int i=0;

    while (s[i] != '\0') {

        if (is_lower(s[i])){
            s[i] = to_upper(s[i]);
        }

        i++;
    }
}
void str_switch_case(char *s){
    int i=0;
  while (s[i] != '\0') {

        if (is_lower(s[i])){
            s[i] = to_upper(s[i]);
        }
        else if (is_upper(s[i])){
            s[i] = to_lower(s[i]);
        }

        i++;
    }
}
  