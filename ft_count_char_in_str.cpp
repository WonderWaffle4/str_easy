#include "str_easy.h"

int ft_count_char_in_str(char sym, string str){
    int kol = 0;
    for(int i = 0; i <= ft_len(str); i++){
        if(sym == str[i]) kol++;
    }
    return kol;
}
