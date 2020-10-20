#include <iostream>

#include "lcs.hpp"

int main(int argc, char* argv){
    std::string s1 = "ABCDEF";
    std::string s2 = "ABCDEFKSLAK";

    std::cout << "The length of the longest common substring between: ";
    std::cout << s1 << " and " << s2;
    std::cout << " is: " << lcs_recursive(s1,s2,s1.length(),s2.length());

    return 0;

}