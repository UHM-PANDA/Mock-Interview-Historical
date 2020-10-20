#include <iostream>
#include <vector>
#include <string>

#include "piglatin.hpp"

int main(int argc, char **argv){

    std::string input = "Hello Apple World";

    std::cout << pig_latin_translator(input) << std::endl;

    std::cout << "Hello World!" << std::endl;

    return 0;
}
