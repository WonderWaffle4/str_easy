#include "str_easy.h"

string itc_three_str(string str1, string str2, string str3){
    string newstr = "";
    for(int i = 0; i < itc_len(str1); i++){
        if(itc_find_str(itc_slice_str(str1, i, i + itc_len(str2) - 1), str2) != -1){
            newstr+= str3;
        }
        else newstr += str1[i];
    }
    return newstr;
}
