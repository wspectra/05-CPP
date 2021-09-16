#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
    type = "Dog";
    std::cout << "Dog " << "created" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog " << "deleted" << std::endl;
}

Dog::Dog(const Dog &object) : Animal()
{
    *this = object;
}

Dog &Dog::operator=(const Dog &object)
{
    if (this == &object)
        return (*this);
    type = "Dog";
    std::cout << "Dog was copied " <<std::endl;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "\"WOOF WOOF\"" << std::endl;
}


