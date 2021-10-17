#include "str_easy.h"

double ft_percent_lower_uppercase(string str){
    double stroch = 0;
    double prop = 0;
    for(int i = 0; i < ft_len(str); i++){
        if(str[i] >= 65 && str[i] <= 90) prop++;
        if(str[i] >= 97 && str[i] <= 122) stroch++;
    }
    if(stroch == 0) return -1;
    return prop / stroch;
}
