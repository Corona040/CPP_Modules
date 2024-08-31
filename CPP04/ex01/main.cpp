#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	Dog d1 = Dog();
	Dog d2 = Dog();

	d1.brain->ideas[0] = "hello";
	std::cout << d1.brain->ideas[0] << std::endl;
	std::cout << d2.brain->ideas[0] << std::endl;
	d2 = d1;
	std::cout << d1.brain->ideas[0] << std::endl;
	std::cout << d2.brain->ideas[0] << std::endl;
	d2.brain->ideas[0] = "goodbye";
	std::cout << d1.brain->ideas[0] << std::endl;
	std::cout << d2.brain->ideas[0] << std::endl;
	Dog d3 = Dog(d1);
	std::cout << d1.brain->ideas[0] << std::endl;
	std::cout << d2.brain->ideas[0] << std::endl;
	std::cout << d3.brain->ideas[0] << std::endl;
	d3.brain->ideas[0] = "goodbye";
	std::cout << d1.brain->ideas[0] << std::endl;
	std::cout << d2.brain->ideas[0] << std::endl;
	std::cout << d3.brain->ideas[0] << std::endl;

	return 0;
}

// Motif
// allocation in construction
// proper free in destructor
