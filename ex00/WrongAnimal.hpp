#include "Animal.hpp"

class WrongAnimal : public Animal {
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &src);
    virtual ~WrongAnimal();
    WrongAnimal &operator=(const WrongAnimal &src);
    void makeSound() const;
};