#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    type = "WrongCat";
    std::cout << "WrongCat " << "created" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat " << "deleted" << std::endl;
}

WrongCat::WrongCat(const WrongCat &object)
{
    *this = object;
}

WrongCat &WrongCat::operator=(const WrongCat &object)
{
    if (this == &object)
        return (*this);
    type = "WrongCat";
    std::cout << "WrongCat was copied " <<std::endl;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "\"MEOW MEOW\"" << std::endl;
}


