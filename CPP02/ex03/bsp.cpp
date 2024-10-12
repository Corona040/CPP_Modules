#include "Point.hpp"

// halfplane
/*bool	bsp(Point const a, Point const b, Point const c, Point const point) {*/
/*	bool		is_inside = true;*/
/*	const int	n_vertices = 3;*/
/*	const Point	vs[] = {a, b, c};*/
/*	Fixed		m;*/
/*	Fixed		yk;*/
/*	Fixed		yp;*/
/**/
/*	for (int i = 0; i < n_vertices - 1; i++) {*/
/*		for (int j = i + 1; j < n_vertices; j++) {*/
/*			int		k = n_vertices - i - j;*/
/*			Fixed	denominator = (vs[j].getx() - vs[i].getx());*/
/*			if (denominator == 0) {*/
/*				is_inside = is_inside && (point.getx() != vs[i].getx());*/
/*				is_inside = is_inside && ((vs[k].getx() > vs[i].getx()) == (point.getx() > vs[i].getx()));*/
/*				is_inside = is_inside && ((vs[k].getx() < vs[i].getx()) == (point.getx() < vs[i].getx()));*/
/*			}*/
/*			else {*/
/*				m = (vs[j].gety() - vs[i].gety()) / denominator;*/
/*				yk = (vs[k].getx() - vs[i].getx()) * m + vs[i].gety();*/
/*				yp = (point.getx() - vs[i].getx()) * m + vs[i].gety();*/
/*				is_inside = is_inside && (point.gety() != yp);*/
/*				is_inside = is_inside && ((vs[k].gety() > yk) == (point.gety() > yp));*/
/*				is_inside = is_inside && ((vs[k].gety() < yk) == (point.gety() < yp));*/
/*			}*/
/*		}*/
/*	}*/
/*	return (is_inside);*/
/*}*/

// barycentric coord
bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed	s;
	Fixed	t;
	Fixed	area;

	// p = p0 + (p1 - p0)*s + (p2 - p0)*t
	// 0 <= s
	// 0 <= t
	// 0 <= 1 - s - t
	area = Point::area(a,b,c);
	s = Point::area(a,b,point)/area;
	t = Point::area(b,c,point)/area;
	/*std::cout << "Area of triangle: " << area << std::endl;*/
	/*std::cout << "1st subarea: " << s << std::endl;*/
	/*std::cout << "2nd subarea: " << t << std::endl;*/
	return (s > 0 && t > 0 && s + t < 1);
}
