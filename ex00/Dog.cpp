#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << "Dog has been constructed" << std::endl;
    this->type = "Dog";
}

Dog::~Dog() {
    std::cout << "Dog has beed destructed" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "woof" << std::endl;
}