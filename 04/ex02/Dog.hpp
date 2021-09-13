#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal{
private:
    Brain *brain;
    std::string name;
public:
    Dog(void);
    Dog(std::string name);
    Dog(const Dog &object);
    ~Dog();
    Dog &operator=(const Dog &object);

    virtual void makeSound() const;
    Brain *getBrain() const;
    void setIdea(std::string idea) const;
};
