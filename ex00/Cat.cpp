#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << "Cat has been constructed" << std::endl;
    this->type = "Cat";
}

Cat::~Cat() {
    std::cout << "Cat has beed destructed" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "meow" << std::endl;
}