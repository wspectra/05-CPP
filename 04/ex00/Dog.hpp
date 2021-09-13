#pragma once
#include "Animal.hpp"
#include <iostream>

class Dog : public Animal{
public:
    Dog(void);
    Dog(const Dog &object);
    ~Dog();
    Dog &operator=(const Dog &object);

    virtual void makeSound() const;
};
