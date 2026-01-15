#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0){
	std::cout << "Default constructor called\n";
}
// we use a reference to a avoid an infinite loop
// where other without '&' would call itself forever
Fixed::Fixed(const Fixed &other){
	std::cout << "Copy constructor called\n";
	this->fixedPointValue = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other){
	std::cout << "Copy assignment operator called\n";

	if (this != &other)
		this->setRawBits(other.getRawBits());
	return *this;
}

int	Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called\n";
	return this->fixedPointValue;
}

void	Fixed::setRawBits( int const raw ){
	this->fixedPointValue = raw;
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}
