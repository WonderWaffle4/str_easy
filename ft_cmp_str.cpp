#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num){
    string newstr = "";
    long long len = itc_len(str1);
    int lstr2 = 0;
    newstr += itc_slice_str(str1, 0, num - 1);
    for(long long i = itc_len(newstr); i < itc_len(str1); i++){
        newstr += str2[lstr2];
        lstr2++;
        num++;
    }
    newstr += itc_slice_str(str1, num, itc_len(str1) - itc_len(str2) - 1);
    return newstr;
}
