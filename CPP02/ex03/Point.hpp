#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

class Point {
	public:
		Point(void);
		Point(const float x, const float y);
		Point(const Point &p);
		Point &(operator=)(const Point &p);
		~Point(void);

		const Fixed &getx(void) const;
		const Fixed &gety(void) const;

		static Fixed	area(const Point &a, const Point &b, const Point &c);

	private:
		const Fixed	x;
		const Fixed	y;
};

#endif
