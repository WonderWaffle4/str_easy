#include "str_easy.h"

string itc_reverse_str(string str){
    string newstr = "";
    for(int i = ft_len(str) - 1; i >= 0; i--){
        newstr += str[i];
    }
    return newstr;
}
