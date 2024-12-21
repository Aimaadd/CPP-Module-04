#include "Animal.hpp"


Animal::Animal() {

}

Animal::Animal(std::string type) : type(type) {

}

Animal::~Animal() {

}

Animal::Animal(const Animal &animal) {
    if (this != &animal)
        *this = animal;
}

std::string Animal::getType() const{
    return type;
}

void Animal::makeSound() const{
    std::cout << "this animal is making " << getType() << " sounds" << std::endl;
}

Animal &Animal::operator=(const Animal &animal) {
    if (this != &animal)
        this->type = animal.type;
    return *this;
}