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

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;

	this->number = n << this->fractionalbits;
	// shift n to the left by the number of fractional bits. 

	return;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;

	this->number = roundf(n * (1 << this->fractionalbits));
	// shift 1 to the left by the number of fractional bits, then multiply by n and round it. It's gonna be n * 256

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

//convert to int
int Fixed::toInt(void) const
{
	return this->number >> this->fractionalbits;
	// shift this->number to the right by the number of fractional bits (8)
}

//convert to float
float Fixed::toFloat(void) const
{
	return (float)this->number / (1 << this->fractionalbits);
	// shift 1 to the left by the number of fractional bits (8), then divide this->number by it.
	//basically number / 256      :/ 
}


//overload operator << to output Fixed class
std::ostream &operator << (std::ostream &output, const Fixed &copy)
{
	output << copy.toFloat(); //converts the fixed point value to a floating point value and sends the latter into the output stream (output stream being console)
	return output;
}