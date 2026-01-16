#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0) {}

Fixed::Fixed(const Fixed &other){
	*this = other;
}

Fixed::Fixed( const int N){
	fixedPointValue = N << fractionalBits;
}

Fixed::Fixed( const float N){
	fixedPointValue = roundf(N * (1 << fractionalBits));
}

int	Fixed::toInt( void ) const{
	return fixedPointValue >> fractionalBits;
}

float	Fixed::toFloat ( void ) const {
	return (float)this->fixedPointValue / (1 << fractionalBits);
}

Fixed	&Fixed::operator=( const Fixed &other ){
	if (this != &other)
		this->setRawBits(other.getRawBits());
	return *this;
}

Fixed	Fixed::operator+( const Fixed &other ) const {
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed	Fixed::operator-( const Fixed &other ) const {
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator*( const Fixed &other ) const {
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator/( const Fixed &other ) const {
	return Fixed(this->toFloat() / other.toFloat());
}

bool	Fixed::operator>( const Fixed &other ) const {
	return this->getRawBits() > other.getRawBits();
}

bool	Fixed::operator<( const Fixed &other ) const {
	return this->getRawBits() < other.getRawBits();
}

bool	Fixed::operator>=( const Fixed &other ) const {
	return this->getRawBits() >= other.getRawBits();
}

bool	Fixed::operator<=( const Fixed &other ) const {
	return this->getRawBits() <= other.getRawBits();
}

bool	Fixed::operator==( const Fixed &other ) const {
	return this->getRawBits()== other.getRawBits();
}

bool	Fixed::operator!=( const Fixed &other ) const {
	return this->getRawBits() != other.getRawBits();
}

Fixed	&Fixed::operator++( void ){
	this->fixedPointValue++;
	return *this;
}

Fixed	Fixed::operator++( int ){
	Fixed temp(*this);

	this->fixedPointValue++;

	return temp;
}

Fixed	&Fixed::operator--( void ){
	this->fixedPointValue--;
	return *this;
}

Fixed	Fixed::operator--( int ){
	Fixed temp(*this);

	this->fixedPointValue--;

	return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b){
	if (a < b)
		return a;
	return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
	if (a < b)
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b){
	if (a > b)
		return a;
	return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
	if (a > b)
		return a;
	return b;
}

int	Fixed::getRawBits( void ) const{
	return fixedPointValue;
}

void	Fixed::setRawBits( int const raw ){
	fixedPointValue = raw;
}

std::ostream	&operator<<(std::ostream &out, const Fixed &data){
	out << data.toFloat();
	return out;
}

Fixed::~Fixed(){}
