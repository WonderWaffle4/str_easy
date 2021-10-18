#include "str_easy.h"

void itc_first_end_three(string str){
    if(itc_len(str) > 5){
        cout << str[0] << endl;
        cout << str[1] << endl;
        cout << str[2] << endl;
        cout << str[itc_len(str) - 3] << endl;
        cout << str[itc_len(str) - 2] << endl;
        cout << str[itc_len(str) - 1] << endl;
    }
    else{
        for(int i = itc_len(str); i != 0; i--){
            cout << str[0];
        }
    }
}
