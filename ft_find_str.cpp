#include "str_easy.h"

int ft_find_str(string str1, string str2){
    for(int i = 0; ft_len(ft_slice_str(str1, i, i + ft_len(str2) - 1)) == ft_len(str2); i++){
        if(ft_slice_str(str1, i, i + ft_len(str2) - 1) == str2) return i;
    }
    return -1;
}
