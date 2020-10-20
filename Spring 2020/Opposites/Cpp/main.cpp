#include <iostream>

#include "opposite.hpp"

int main(int argc,char** argv){
    std::vector<int> yeet = {1,2,3,4,-1,-3,-100};

    std::vector<int> yeet2 = opposites_optimal(yeet);

    std::cout << "For the array: ";
    for(auto& it : yeet){
        std::cout << it << " ";
    }

    std::cout << "the elements with no opposites are: ";
    for(auto& it : yeet2){
        std::cout << it << " ";
    }

    std::cout << std::endl;

    return 0;
}