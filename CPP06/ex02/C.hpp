#ifndef C_HPP
# define C_HPP

# include "Base.hpp"
# include <iostream>

class C: public Base {};
std::ostream &(operator<<)(std::ostream &os, const C &c);

#endif