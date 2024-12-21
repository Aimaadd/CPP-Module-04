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

Cat::Cat(const Cat &cat) {
    if (this != &cat)
        *this = cat;
}

Cat &Cat::operator=(const Cat &cat) {
    if (this != &cat)
        this->type = cat.type;
    return *this;
}
