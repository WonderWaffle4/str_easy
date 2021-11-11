#include "str_easy.h"

string itc_even_place(string str){
    string newstr;
    if(itc_len(str) <= 1) return "-1";
    for(long long i = 0; i < itc_len(str); i++){
        if(i % 2 == 1) newstr += str[i];
    }
    return newstr;
}
