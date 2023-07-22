#include <iostream>
#include "Fixed.hpp"

int main(void)
{

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(a);
	Fixed d(a + b);

	std::cout << "PDF TEST CASES" << std::endl << std::endl;
	
	std::cout << "a is " << a << std::endl;
	std::cout << "++a is " << ++a << std::endl;
	std::cout << "a is " << a << "This is 1/256" << std::endl;
	std::cout << "a++ is " << a++ << std::endl;
	std::cout << "a is " << a << std::endl;

	std::cout << "b is " << b << std::endl;

	std::cout << "max(a, b) is " << Fixed::max( a, b ) << std::endl;

	std::cout << "=== TEST CASES ===" << std::endl;

	std::cout << "c is " << c << std::endl;
	std::cout << "--c is " << --c << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "c-- is " << c-- << std::endl;
	std::cout << "c is " << c << std::endl;

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;

	std::cout << "a + b is " << a + b << std::endl;
	std::cout << "a - b is " << a - b << std::endl;
	std::cout << "a * b is " << a * b << std::endl;
	std::cout << "a / b is " << a / b << std::endl;

	std::cout << "a > b is " << (a > b) << std::endl;
	std::cout << "a < b is " << (a < b) << std::endl;
	std::cout << "a >= b is " << (a >= b) << std::endl;
	std::cout << "a <= b is " << (a <= b) << std::endl;
	std::cout << "a == b is " << (a == b) << std::endl;
	std::cout << "a != b is " << (a != b) << std::endl;

	std::cout << "min(a, b) is " << Fixed::min(a, b) << std::endl;
	std::cout << "max(a, b) is " << Fixed::max(a, b) << std::endl;

	return 0;

}