#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {

	public:

		Fixed(void); //constructor
		Fixed (const int n); //constructor that takes an integer
		Fixed (const float n); //constructor that takes a float

		Fixed(const Fixed &copy); //copy constructor

		~Fixed(void); //destructor

		Fixed &operator=(const Fixed &copy); //copy assignment operator 

		int getRawBits(void) const; //get

		void setRawBits(int const raw); //set

		float toFloat(void) const; //convert to float

		int toInt(void) const; //convert to int

	private:

		int number;

		static const int fractionalbits = 8;
};

std::ostream &operator<<(std::ostream &output, const Fixed &copy); //overload operator << to output Fixed class

#endif