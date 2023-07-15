#include "Fixed.hpp"

//constructor
Fixed::Fixed(void) : number(0)
{

	std::cout << "Default constructor called" << std::endl;

	this->number = 0;

	return;
}

//copy constructor
Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;

	this->number = copy.getRawBits();

	return;
}

//destructor
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;

	return;
}

//copy assignment operator
Fixed &Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;

	this->number = copy.getRawBits();

	return *this;
}

//get
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;

	return this->number;
}

//set
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;

	this->number = raw;

	return;
}