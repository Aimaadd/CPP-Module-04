#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
    public :
        Animal(std::string type);
        Animal();
        ~Animal();
        void makeSound() const;
        std::string getType() const;
    protected :
        std::string type;
};

#endif