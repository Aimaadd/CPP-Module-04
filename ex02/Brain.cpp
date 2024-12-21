#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &brain) {
    if (this != &brain)
        *this = brain;
}

Brain &Brain::operator=(const Brain &brain) {
    if (this != &brain)
        for (int i = 0; i < 100; i++)
            this->ideas[i] = brain.ideas[i];
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}