#include "str_easy.h"

int itc_find_str(string str1, string str2){
    for(int i = 0; itc_len(itc_slice_str(str1, i, i + itc_len(str2) - 1)) == itc_len(str2); i++){
        if(itc_slice_str(str1, i, i + itc_len(str2) - 1) == str2) return i;
    }
    return -1;
}
