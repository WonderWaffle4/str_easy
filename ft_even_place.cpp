#include "str_easy.h"

string itc_even_place(string str){
    string newstr;
    for(long long i = 0; i < itc_len(str); i++){
        if(i % 2 == 0) newstr += str[i];
    }
    return newstr;
}
