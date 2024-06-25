#include "Point.hpp"

Point::Point(void): x(0), y(0) {}

Point::Point(const float x, const float y): x(x), y(y) {}

Point::Point(const Point &p) {}

Point &(Point::operator=)(const Point &p) {return (*this);}

Point::~Point(void) {}

const Fixed	&Point::getx(void) {
	return (this->x);
}

const Fixed	&Point::gety(void) {
	return (this->y);
}
