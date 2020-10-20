#include <iostream>

#include "valid.hpp"

int main(int argc, char** argv){
    std::string s1 = "()";
    std::string s2 = "())";

    std::cout << s1 << " is valid? " << (valid_parentheses(s1) ? "yes" : "no") << std::endl;
    std::cout << s2 << " is valid? " << (valid_parentheses(s2) ? "yes" : "no") << std::endl;

    return 0;

}
