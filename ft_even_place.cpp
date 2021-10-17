#include "str_easy.h"

string ft_even_place(string str){
    string newstr;
    for(int i = 1; i < ft_len(str); i+=2){
        newstr += str[i];
    }
    return newstr;
}
