#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
    std::cout << "Animal " << "created" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal " << "deleted" << std::endl;
}

Animal::Animal(const Animal &object)
{
    *this = object;
}

Animal &Animal::operator=(const Animal &object)
{
    if (this == &object)
        return (*this);
    type = "Animal";
    std::cout << "Animal was copied " <<std::endl;
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << "\"WILD ANIMAL SOUND\"" << std::endl;
}

std::string Animal::getType() const
{
    return(type);
}
