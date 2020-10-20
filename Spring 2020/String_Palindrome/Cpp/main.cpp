#include <iostream>
#include <string>

#include "spalin.hpp"

int main(int argc, char** argv){
	std::string test = "Hello";
	std::string test2 = "ada";

	std::cout << "Is " << test << " a palindrome?: " << (string_palindrome(test) ? "yes": "no") <<std::endl;
	std::cout << "Is " << test2 << " a palindrome?: " << (string_palindrome(test2) ? "yes": "no") <<std::endl;
}
