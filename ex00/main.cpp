#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
const Animal* meta = new Animal("boubou");
const Animal* j = new Dog();
const Animal* i = new Cat();
const Animal test = Animal(*meta);
const WrongAnimal* k = new WrongCat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << test.getType() << " " << std::endl;
std::cout << "meta " << meta->getType() << " " << std::endl;
i->makeSound();
j->makeSound();
k->makeSound();
meta->makeSound();
delete i;
delete j;
delete k;
delete meta;
return 0;
}