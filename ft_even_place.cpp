#include "str_easy.h"

string itc_even_place(string str){
    string newstr;
    for(int i = 1; i < itc_len(str); i+=2){
        newstr += str[i];
    }
    return newstr;
}
