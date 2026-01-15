#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0){
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &other){
	std::cout << "Copy constructor called\n";
	fixedPointValue = other.getRawBits();
}

Fixed::Fixed( const int N){
	std::cout << "Int constructor called\n";
	fixedPointValue = N << fractionalBits;
}

Fixed::Fixed( const float N){
	std::cout << "Float constructor called\n";
	fixedPointValue = 2 * roundf(N * 256);
}

int Fixed::toInt( void ) const{
	return fixedPointValue >> fractionalBits;
}

float Fixed::toFloat ( void ) const {
	return fixedPointValue / 256.0;
}

int	Fixed::getRawBits( void ) const{
	return this->fixedPointValue;
}

void	Fixed::setRawBits( int const raw ){
	this->fixedPointValue = raw;
}

std::ostream &operator<<(std::ostream &out, const Fixed &data){
	out << data.toFloat();
	return out;
}


Fixed::~Fixed(){

}

