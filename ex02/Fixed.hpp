#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {

	public:

		Fixed(void); //constructor
		Fixed (const int n); //constructor converts integer value to fixed point value
		Fixed (const float n); //constructor converts floating point value to fixed point value

		Fixed(const Fixed &copy); //copy constructor

		~Fixed(void); //destructor

		Fixed &operator=(const Fixed &copy); //copy assignment operator 

		int getRawBits(void) const; //get

		void setRawBits(int const raw); //set

		float toFloat(void) const; //convert to float

		int toInt(void) const; //convert to int

		Fixed static &min(Fixed &a, Fixed &b); //returns the minimum of a and b
		const Fixed static &min(Fixed const &a, Fixed const &b); 
		
		Fixed static &max(Fixed &a, Fixed &b); //returns the maximum of a and b
		const Fixed static &max(Fixed const &a, Fixed const &b); 

		//overloaded operators
		bool operator>(const Fixed &copy) const;
		bool operator<(const Fixed &copy) const;
		bool operator>=(const Fixed &copy) const;
		bool operator<=(const Fixed &copy) const;
		bool operator==(const Fixed &copy) const;
		bool operator!=(const Fixed &copy) const;

		Fixed operator+(const Fixed &copy) const;
		Fixed operator-(const Fixed &copy) const;
		Fixed operator*(const Fixed &copy) const;
		Fixed operator/(const Fixed &copy) const;

		Fixed operator++(void);
		Fixed operator++(int);
		Fixed operator--(void); 
		Fixed operator--(int); 


	private:

		int number;

		static const int fractionalbits = 8;
};

std::ostream &operator<<(std::ostream &output, const Fixed &copy); //overload operator << to output Fixed class

#endif