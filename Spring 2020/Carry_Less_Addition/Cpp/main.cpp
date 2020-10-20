#include <iostream>

#include "carrylessaddition.hpp"

int main(int argc, char** argv){
	
	int a = 10;
	int b = 99;

	std::cout << "Carry-less addition of ";
	std::cout << a << " and " << b;
	std::cout << " is " << carry_less_addition(a,b);
	std::cout << std::endl;
		
	return 0;
}
