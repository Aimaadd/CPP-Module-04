#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << "Dog has been constructed" << std::endl;
    this->type = "Dog";
}

Dog::~Dog() {
    std::cout << "Dog has beed destructed" << std::endl;
}

Dog::Dog(const Dog &dog) {
    if (this != &dog)
        *this = dog;
}

Dog &Dog::operator=(const Dog &dog) {
    if (this != &dog)
        this->type = dog.type;
    return *this;
}

void Dog::makeSound() const{
    std::cout << "woof" << std::endl;
}