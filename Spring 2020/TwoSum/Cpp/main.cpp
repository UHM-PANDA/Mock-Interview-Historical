#include <iostream>
#include <vector>

#include "twosum.hpp"

int main(int argc, char **argv){

	std::vector<int> check = {1,2,3,4,5};	
	int target = 7;

	std::cout << "Can any two elements in ";
	for(int i = 0; i < check.size(); i++){
		std::cout << check[i] << " ";
	}
	std::cout << "add up to " << target << "? ";
	std::cout << (two_sum(check,target) ? "yes":"no") << std::endl;
	
}
