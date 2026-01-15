#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>


class Fixed{

	public:
		Fixed();
		Fixed( const Fixed &other );
		Fixed( const int N );
		Fixed( const float N );
		float toFloat( void ) const;
		int toInt( void ) const;
		Fixed &operator=( const Fixed &other );
		Fixed &operator<<( const Fixed &other);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		~Fixed();



	private:
		int fixedPointValue;
		static const int fractionalBits = 8;
};

#endif
