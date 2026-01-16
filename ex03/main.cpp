#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main(){
	Point a(0, 0);
	Point b(10, 0);
	Point c(0, 10);
	Point p1(2, 2);   // Should be inside
	Point p2(10, 10); // Should be outside
	Point p3(0, 5);   // Should be false (on the edge)

	if (bsp(a, b, c, p1) == true) {
		std::cout << "P1 is inside the triangle." << std::endl;
	} else {
		std::cout << "P1 is outside the triangle." << std::endl;
	}
	if (bsp(a, b, c, p2) == true) {
		std::cout << "P2 is inside the triangle." << std::endl;
	} else {
		std::cout << "P2 is outside the triangle." << std::endl;
	}
	if (bsp(a, b, c, p3) == true) {
		std::cout << "P3 is inside the triangle." << std::endl;
	} else {
		std::cout << "P3 is outside the triangle." << std::endl;
	}

	return 0;
}
