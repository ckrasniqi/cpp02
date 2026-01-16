#include "Point.hpp"
#include "Fixed.hpp"

static Fixed checkSide(Point const edgeStart, Point const edgeEnd, Point const p);

bool bsp( Point const a, Point const b, Point const c, Point const point){
	Fixed sideAB = checkSide(a, b, point);
	Fixed sideBC = checkSide(b, c, point);
	Fixed sideCA = checkSide(c, a, point);

	if (sideAB  == 0 || sideBC == 0 || sideCA == 0)
		return false;
	if (sideAB > 0 && sideBC > 0 && sideCA > 0)
		return true;
	else if (sideAB < 0 && sideBC < 0 && sideCA < 0)
		return true;
	else
		return false;
}

static Fixed checkSide(Point const edgeStart, Point const edgeEnd, Point const p){
	// Formula: (x1 - px) * (y2 - y1) - (x2 - x1) * (y1 - py)
	return (edgeStart.getX() - p.getX()) * (edgeEnd.getY() - edgeStart.getY()) -
			(edgeEnd.getX() - edgeStart.getX()) * (edgeStart.getY() - p.getY());
}
