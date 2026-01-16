#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include "Point.hpp"

class Fixed{

	public:
		Fixed();
		Fixed( const Fixed &other );
		Fixed( const int N );
		Fixed( const float N );

		int toInt( void ) const;
		float toFloat( void ) const;

		Fixed &operator=( const Fixed &other );
		Fixed operator+( const Fixed &other ) const;
		Fixed operator-( const Fixed &other ) const;
		Fixed operator*( const Fixed &other ) const;
		Fixed operator/( const Fixed &other ) const;

		bool operator>( const Fixed &other ) const;
		bool operator<( const Fixed &other ) const;
		bool operator>=( const Fixed &other ) const;
		bool operator<=( const Fixed &other ) const;
		bool operator==( const Fixed &other ) const;
		bool operator!=( const Fixed &other ) const;

		Fixed &operator++( void );
		Fixed operator++( int );
		Fixed &operator--( void );
		Fixed operator--( int );

		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		~Fixed();

	private:
		int fixedPointValue;
		static const int fractionalBits = 8;
};

	std::ostream &operator<<(std::ostream &out, const Fixed &data);

#endif
