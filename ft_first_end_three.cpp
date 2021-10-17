#include "str_easy.h"

void ft_first_end_three(string str){
    if(ft_len(str) > 5){
        cout << str[0] << endl;
        cout << str[1] << endl;
        cout << str[2] << endl;
        cout << str[ft_len(str) - 3] << endl;
        cout << str[ft_len(str) - 2] << endl;
        cout << str[ft_len(str) - 1] << endl;
    }
    else{
        for(int i = ft_len(str); i != 0; i--){
            cout << str[0];
        }
    }
}
