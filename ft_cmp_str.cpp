#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num){
    string newstr = "";
    newstr += itc_slice_str(str1, 1, num);
    newstr += str2;
    newstr += itc_slice_str(str1, num + 1, itc_len(str1));
    return newstr;
}
