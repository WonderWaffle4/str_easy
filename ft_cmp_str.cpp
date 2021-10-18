#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num){
    string newstr = "";
    newstr += ft_slice_str(str1, 0, num);
    newstr += str2;
    newstr += ft_slice_str(str1, num, ft_len(str1));
    return newstr;
}
