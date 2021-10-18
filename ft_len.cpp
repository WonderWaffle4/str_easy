#include "str_easy.h"

int itc_len(string str){
    int kol = 0;
    for(int i = 0; str[i] != '\0'; i++){
        kol++;
    }
    return kol;
}
