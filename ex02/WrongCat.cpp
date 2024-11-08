#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) {
    *this = src;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src) {
    if (this != &src) {
        this->type = src.type;
    }
    std::cout << "WrongCat assignation operator called" << std::endl;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat makes a sound" << std::endl;
}
