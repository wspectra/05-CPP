#pragma once
#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal{
public:
    WrongCat(void);
    WrongCat(const WrongCat &object);
    ~WrongCat();
    WrongCat &operator=(const WrongCat &object);

    void makeSound() const;
};
