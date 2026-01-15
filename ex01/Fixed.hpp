#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>


class Fixed{

	public:
		Fixed( const int N );
		Fixed( const float N );
		~Fixed();



	private:
		int fixedPointValue;
		static const int fractionalBits = 8;
};

#endif
