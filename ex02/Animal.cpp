#include "Animal.hpp"


Animal::Animal() : type("Animal") {

}

Animal::Animal(std::string type) : type(type) {

}

Animal::~Animal() {

}

std::string Animal::getType() const{
    return type;
}

