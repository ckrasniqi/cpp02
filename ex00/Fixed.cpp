#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &other){
	std::cout << "Copy constructor called\n";
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called\n";

}

void	setRawBits( int const raw ){

}
