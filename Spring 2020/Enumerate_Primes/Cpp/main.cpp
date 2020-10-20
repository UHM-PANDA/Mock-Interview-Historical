#include <iostream>
#include <vector>

#include "enumerate.hpp"

int main(int argc, char *argv[]){
    
    // used as input to enumerate_all_primes function
    int yes;

    // if we are not passed in the value from command line, ask user for input
    if(argc == 1){
        std::cin >> yes;
    }
    else{
        yes = static_cast<int>(*argv[1]);
    }
    while(yes < 2){
        std::cout << "Error! Please input a value greater than or equal to 2!" << std::endl;
        std::cin >> yes;
    }

    for (auto x : enumerate_all_primes(yes)){
        std::cout << x << ' ';
    }
    std::cout << std::endl;
    
    return 0;
}