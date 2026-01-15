#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

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

		bool operator>( const Fixed &other );
		bool operator<( const Fixed &other );
		bool operator>=( const Fixed &other );
		bool operator<=( const Fixed &other );
		bool operator==( const Fixed &other );
		bool operator!=( const Fixed &other );

		Fixed &operator++( void );
		Fixed operator++( int );


		int getRawBits( void ) const;
		void setRawBits( int const raw );
		~Fixed();

	private:
		int fixedPointValue;
		static const int fractionalBits = 8;
};

	std::ostream &operator<<(std::ostream &out, const Fixed &data);

#endif
