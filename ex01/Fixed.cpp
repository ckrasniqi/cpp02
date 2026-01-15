#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0){
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &other){
	std::cout << "Copy constructor called\n";
}

Fixed::Fixed( const int N){
//A constructor that takes a constant integer as a parameter.
//It converts it to the corresponding fixed-point value. The fractional bits value
//should be initialized to 8, like in exercise 00.
	std::cout << "Int constructor called\n";

}

Fixed::Fixed( const float N){
	//A constructor that takes a constant floating-point number as a parameter.
	//It converts it to the corresponding fixed-point value. The fractional bits value
	//should be initialized to 8, like in exercise 00.
	std::cout << "Float constructor called\n"
}

float Fixed::toFloat ( void ) const {

}

int Fixed::toInt( void ) const{

}

Fixed &Fixed::operator=(const Fixed &other){
	std::cout << "Copy assignment operator called\n";

	if (this != &other)
		this->setRawBits(other.getRawBits());
	return *this;
}


Fixed &Fixed::operator<<( const Fixed &other ){

}

int	Fixed::getRawBits( void ) const{
	return this->fixedPointValue;
}

void	Fixed::setRawBits( int const raw ){
	this->fixedPointValue = raw;
}

Fixed::~Fixed(){

}

