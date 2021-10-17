#ifndef STR_EASY_H_INCLUDED
#define STR_EASY_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

string ft_hello_str(string name);
string ft_even_place(string str);
string ft_reverse_str(string str);
string ft_slice_str(string str, int start, int last);
string ft_cmp_str(string str1, string str2, int num);
string ft_three_str(string str1, string str2, string str3);

void ft_print_copy_str(string str, int number);
void ft_first_end_three(string str);

int ft_len(string str);
int ft_count_char_in_str(char, string str);
int ft_find_str(string str1, string str2);
int ft_max_char_on_end(string str);


double ft_percent_lower_uppercase(string str);

bool ft_equal_reverse(string str);
#endif // STR_EASY_H_INCLUDED
