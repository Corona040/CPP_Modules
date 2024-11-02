#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	const Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();
	/**i = *j;*/
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_i = new WrongCat();
	std::cout << wrong_i->getType() << " " << std::endl;
	wrong_i->makeSound(); //will output the cat sound!
	wrong_meta->makeSound();

	delete meta;
	delete i;
	delete j;
	delete wrong_meta;
	delete wrong_i;
	return 0;
}


// Motif
// learning about 'virtual' keyword and inheritance
// virtual member functions can be overriden by derived classes
//   polymorphic class
