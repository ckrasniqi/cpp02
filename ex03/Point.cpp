#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(0), y(0){}

Point::Point( const float a, const float b ) : x(a), y(b){}

Point::Point( const Point &other ){
	*this = other;
}

Point	&Point::operator=( const Point &other ){

}

Point::~Point(){}
