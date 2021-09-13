#include "Cat.hpp"

#include "Cat.hpp"

Cat::Cat(void)
{
    type = "Cat";
    std::cout << "Cat " << "created" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat " << "deleted" << std::endl;
}

Cat::Cat(const Cat &object)
{
    *this = object;
}

Cat &Cat::operator=(const Cat &object)
{
    if (this == &object)
        return (*this);
    type = "Cat";
    std::cout << "Cat was copied " <<std::endl;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "\"MEOW MEOW\"" << std::endl;
}


