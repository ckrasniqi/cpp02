#include "Fixed.hpp"

Fixed::Fixed( const int N) : fixedPointValue(0){

}

Fixed::Fixed( const float N){}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

