#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
    public :
        Animal(std::string type);
        Animal(const Animal &animal);
        Animal();
        ~Animal();
        void makeSound() const;
        std::string getType() const;
        Animal &operator=(const Animal &animal);
    protected :
        std::string type;
};

#endif