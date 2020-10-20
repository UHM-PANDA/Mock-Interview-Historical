#include <iostream>

#include "rpolish.hpp"

int main(int argc, char** argv){
    std::string s1 = "4 6 +";
    std::string s2 = "3 4 + 3 +";

    std::cout << s1 << " = " << reverse_polish(s1) << std::endl;
    std::cout << s2 << " = " << reverse_polish(s2) << std::endl;

    return 0;
}