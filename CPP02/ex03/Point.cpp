#include "Point.hpp"

Point::Point(void): x(0), y(0) {}

Point::Point(const float x, const float y): x(x), y(y) {}

Point::Point(const Point &p): x(p.x), y(p.y) {}

Point &(Point::operator=)(const Point &p) {(void)p;return (*this);}

Point::~Point(void) {}

const Fixed	&Point::getx(void) const {
	return (this->x);
}

const Fixed	&Point::gety(void) const {
	return (this->y);
}

// returns area of triangle defined
Fixed	Point::area(const Point &a, const Point &b, const Point &c) {
	// P = b - a
	// Q = c - a
	// P x Q (2D)
	// {0, 0, P.x * Q.y - P.y * Q.x}
	Fixed area = ((b.x-a.x)*(c.y-a.y)-(b.y-a.y)*(c.x-a.x))/2;
	return (Fixed::max(area,Fixed(-1) * area));
}
