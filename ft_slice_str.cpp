#include "str_easy.h"

string itc_slice_str(string str, int start, int last){
    string newstr = "";
    if(last > ft_len(str)) last == ft_len(str);
    for(int i = start; i <= last; i++) newstr += str[i];
    return newstr;
}
