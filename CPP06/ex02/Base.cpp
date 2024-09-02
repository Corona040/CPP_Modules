#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(void) {}

Base	*Base::generate(void) {
	srand(time((time_t *)0));
	int	rdm = rand() / (RAND_MAX / 3);

	if (rdm == 0)
		return (new A());
	else if (rdm == 1)
		return (new B());
	else
		return (new C());
}

void	Base::identify(Base *p) {
	A	*a = dynamic_cast<A *>(p);
	B	*b = dynamic_cast<B *>(p);
	C	*c = dynamic_cast<C *>(p);

	if (a)
		std::cout << *a << std::endl;
	else if (b)
		std::cout << *b << std::endl;
	else
		std::cout << *c << std::endl;
}

void	Base::identify(Base &p) {
	A	*a = dynamic_cast<A *>(&p);
	B	*b = dynamic_cast<B *>(&p);
	C	*c = dynamic_cast<C *>(&p);

	if (a)
		std::cout << *a << std::endl;
	else if (b)
		std::cout << *b << std::endl;
	else
		std::cout << *c << std::endl;
}
