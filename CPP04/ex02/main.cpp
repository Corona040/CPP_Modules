#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	AAnimal	*a = new Dog();
	AAnimal	*b = new Dog();
	AAnimal	*c = new Cat();
	Dog *a1;
	Dog *b1;

	// *a = *b;
	a1 = (Dog *)a;
	b1 = (Dog *)b;
	*a1 = *b1;
	Dog		d;

	return 0;
}
