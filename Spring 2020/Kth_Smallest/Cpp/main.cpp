#include <iostream>
#include <vector>

#include "k_smallest.hpp"

int main(int argc, char** argv){
	std::vector<int> check = {4,7,5,3,8,10,44};
	int tar = 3;

	std::cout << "the " << tar << " smallest element in ";
	for(int i = 0; i < check.size(); i++){
		std::cout << check[i] << " ";
	}
	std::cout << "is " << kth_smallest(check,tar) << std::endl;

}		
