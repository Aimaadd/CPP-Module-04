#include "Animal.hpp"


Animal::Animal() {

}

Animal::Animal(std::string type) : type(type) {

}

Animal::~Animal() {

}

std::string Animal::getType() const{
    return type;
}

void Animal::makeSound() const{
    std::cout << "this animal is making " << getType() << " sounds" << std::endl;
}
