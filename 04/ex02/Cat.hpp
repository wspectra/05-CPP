#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal{
private:
    Brain *brain;
    std::string name;
public:
    Cat(void);
    Cat(std::string name);
    Cat(const Cat &object);
    ~Cat();
    Cat &operator=(const Cat &object);

    virtual void makeSound() const;
    Brain *getBrain() const;
    void setIdea(std::string idea) const;
};
