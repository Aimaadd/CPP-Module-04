#ifndef BRAIN_HPP
# define BRAIN_HPP

#include<iostream>

class Brain {
    public :
        Brain();
        ~Brain();
        std::string ideas[100];
        Brain(const Brain &brain);
        Brain &operator=(const Brain &brain);
};

#endif