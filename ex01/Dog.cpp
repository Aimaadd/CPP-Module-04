#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << "Dog has been constructed" << std::endl;
    this->type = "Dog";
    new Brain();
}

Dog::~Dog() {
    std::cout << "Dog has beed destructed" << std::endl;
    delete this->brain;
}

void Dog::makeSound() const{
    std::cout << "woof" << std::endl;
}