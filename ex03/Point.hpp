#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{

	public:
		Point();
		Point( const float a, const float b);
		Point( const Point &other );
		Point &operator=( const Point &other );
		~Point();

		Fixed getX( void ) const;
		Fixed getY( void ) const;

	private:
		Fixed const x;
		Fixed const y;

};

#endif
