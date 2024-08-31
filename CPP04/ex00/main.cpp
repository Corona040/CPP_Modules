#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

// int main()
// {
// 	const Animal* meta = new Animal();
// 	Animal* j = new Dog();
// 	Animal* i = new Cat();
// 	*i = *j;
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();
//
// 	const WrongAnimal* wrong_meta = new WrongAnimal();
// 	const WrongAnimal* wrong_i = new WrongCat();
// 	std::cout << wrong_i->getType() << " " << std::endl;
// 	wrong_i->makeSound(); //will output the cat sound!
// 	wrong_meta->makeSound();
//
// 	delete meta;
// 	delete i;
// 	delete j;
// 	return 0;
// }
//
int main() {
	Animal* dog = new Dog();
	Animal* cat = new Animal(*dog);
	std::cout << "type:" << cat->getType() << std::endl;
	cat->makeSound();         // should output cat sound, instead outputs dog sound
}

// Motif
// learning about 'virtual' keyword and inheritance
// virtual member functions can be overriden by derived classes
//   polymorphic class
