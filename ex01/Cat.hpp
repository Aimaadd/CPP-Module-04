#ifndef CAT_HPP
# define CAT_HPP

#include "Brain.hpp"
#include "Animal.hpp"

class Cat : public Animal {
    public :
        Cat();
        ~Cat();
        void makeSound() const;
    private :
        Brain *brain;
};

#endif