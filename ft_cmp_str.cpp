#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num){
    string newstr = "";
    long long buffer = num;
    newstr += itc_slice_str(str1, 0, num - 1);
    for(long long i = 0; i < itc_len(str2) && i < itc_len(str1) && buffer < itc_len(str1); i++){
        newstr += str2[i];
        buffer++;
    }
    newstr += itc_slice_str(str1, num, num + itc_len(str1) - itc_len(newstr) - 1);
    return newstr;
}
