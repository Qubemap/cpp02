#include <iostream>
#include "Fixed.hpp"

int main(void) {
	Fixed a; //default constructor is called here
	Fixed const b(10); //int constructor is called here
	Fixed const c(42.42f); //float constructor is called here
	Fixed const d(b); //copy constructor is called here

	a = Fixed(1234.4321f); //float constructor is called here, then copy assignment operator is called here

	std::cout << "a is " << a << std::endl; //<< operator is called here
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl; //toInt() is called here
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return 0; 
}
