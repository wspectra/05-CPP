#pragma once
#include "Animal.hpp"
#include <iostream>

class Cat : public Animal{
public:
    Cat(void);
    Cat(const Cat &object);
    ~Cat();
    Cat &operator=(const Cat &object);

    virtual void makeSound() const;
};
