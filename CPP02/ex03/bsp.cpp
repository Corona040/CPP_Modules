#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	bool		is_inside = true;
	const int	n_vertices = 3;
	const Point	vs[] = {a, b, c};
	Fixed		m;
	Fixed		yk;
	Fixed		yp;

	for (int i = 0; i < n_vertices - 1; i++) {
		for (int j = i + 1; j < n_vertices; j++) {
			int		k = n_vertices - i - j;
			Fixed	denominator = (vs[j].getx() - vs[i].getx());
			if (denominator == 0)
				is_inside = is_inside && ((vs[k].getx() > vs[i].getx()) == (point.getx() > vs[i].getx()));
			else {
				m = (vs[j].gety() - vs[i].gety()) / denominator;
				yk = (vs[k].getx() - vs[i].getx()) * m + vs[i].gety();
				yp = (point.getx() - vs[i].getx()) * m + vs[i].gety();
				is_inside = is_inside && ((vs[k].gety() > yk) == (point.gety() > yp));
			}
		}
	}
	return (is_inside);
}
