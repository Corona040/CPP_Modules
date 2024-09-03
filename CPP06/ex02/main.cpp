#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

int	main(void) {
	Base *p = Base::generate();
	Base &b = *p;
	A	a = A();
	C	c = C();
	Base &ba = a;
	Base &bc = c;

	Base::identify(p);
	Base::identify(b);
	Base::identify(&a);
	Base::identify(&c);
	Base::identify(ba);
	Base::identify(bc);
}

// Motif
// dynamic cast
// cast classes along inheritance hierarchy
