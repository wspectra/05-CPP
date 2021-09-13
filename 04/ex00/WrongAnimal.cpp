#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
    std::cout << "WrongAnimal " << "created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal " << "deleted" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &object)
{
    *this = object;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &object)
{
    if (this == &object)
        return (*this);
    type = "WrongAnimal";
    std::cout << "WrongAnimal was copied " <<std::endl;
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "\"WILD WRONG ANIMAL SOUND\"" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return(type);
}

