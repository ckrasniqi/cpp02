#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits(){
	std::cout << "getRawBits member function called\n";
}
