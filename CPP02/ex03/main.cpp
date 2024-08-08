#include "Point.hpp"
#include <cstdlib>

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int main(int argc, char **argv) {
	if (argc != 9)
		return (0);
	Point a(atof(argv[1]), atof(argv[2]));
	Point b(atof(argv[3]), atof(argv[4]));
	Point c(atof(argv[5]), atof(argv[6]));
	Point point(atof(argv[7]), atof(argv[8]));

	std::cout << bsp(a, b, c, point) << std::endl;
	return 0;
}
