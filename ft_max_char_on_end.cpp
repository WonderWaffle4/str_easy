#include "str_easy.h"

int itc_max_char_on_end(string str){
    int kol = 1;
    int maxkol = 0;
    for(int i = 0; i < ft_len(str); i++){
        if(str[i] >= 48 && str[i] <= 57 && str[i + 1] >= 48 && str[i + 1] <= 57){
            kol++;
        }
        else{
            if(maxkol < kol) maxkol = kol;
            kol = 1;
        }
    }
    return maxkol;
}
