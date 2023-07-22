#include <iostream>
#include "Fixed.hpp"

int main(void) {
	Fixed a; //default constructor is called here
	Fixed b(a); //copy constructor is called here (also calls getRawBits)
	Fixed c; //default constructor is called here
	c = b; //copy assignment operator is called here (also calls getRawBits)

	std::cout << a.getRawBits() << std::endl; //get rawbits and so on you get it
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0; 
}
