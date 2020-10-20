#include "spalin.hpp"

bool string_palindrome(std::string input){
    std::string temp;
    for(int i = input.length() - 1; i > -1;i--){
        temp.push_back(input[i]);
    }
    return input == temp;
}
