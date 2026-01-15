#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0){
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &other){
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed::Fixed( const int N){
	std::cout << "Int constructor called\n";
	fixedPointValue = N << fractionalBits;
}

Fixed::Fixed( const float N){
	std::cout << "Float constructor called\n";
	fixedPointValue = roundf(N * (1 << fractionalBits));
}

int Fixed::toInt( void ) const{
	return fixedPointValue >> fractionalBits;
}

float Fixed::toFloat ( void ) const {
	return (float)this->fixedPointValue / (1 << fractionalBits);
}

Fixed &Fixed::operator=( const Fixed &other ){
	std::cout << "Copy assignment operator called\n";

	if (this != &other)
		this->setRawBits(other.getRawBits());
	return *this;
}

int	Fixed::getRawBits( void ) const{
	return fixedPointValue;
}

void	Fixed::setRawBits( int const raw ){
	fixedPointValue = raw;
}

std::ostream &operator<<(std::ostream &out, const Fixed &data){
	out << data.toFloat();
	return out;
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}
