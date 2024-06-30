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
