#ifndef STR_EASY_H_INCLUDED
#define STR_EASY_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

string itc_hello_str(string name);
string itc_even_place(string str);
string itc_reverse_str(string str);
string itc_slice_str(string str, int start, int last);
string itc_cmp_str(string str1, string str2, int num);
string itc_three_str(string str1, string str2, string str3);

void itc_print_copy_str(string str, int number);
void itc_first_end_three(string str);

int itc_len(string str);
int itc_count_char_in_str(char, string str);
int itc_find_str(string str1, string str2);
int itc_max_char_on_end(string str);


double itc_percent_lower_uppercase(string str);

bool itc_equal_reverse(string str);
#endif // STR_EASY_H_INCLUDED
