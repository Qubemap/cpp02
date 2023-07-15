#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	public:

		Fixed(void); //constructor

		Fixed(const Fixed &copy); //copy constructor

		~Fixed(void); //destructor

		Fixed &operator=(const Fixed &copy); //copy assignment operator 
		//copy assignment operator is an operator used to copy values from one object to another already existing object

		int getRawBits(void) const; //get

		void setRawBits(int const raw); //set

	private:

		int number; //number is an integer to store fixed-point number value

		static const int fractionalbits = 8; //fractionalbits is a constant integer with value 8
};

#endif