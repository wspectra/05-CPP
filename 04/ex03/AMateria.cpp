#include "AMateria.hpp"

AMateria::AMateria(void) : type("AMateria")
{
    std::cout << "AMateria " << "created" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria " << "deleted" << std::endl;
}

AMateria::AMateria(const AMateria &object)
{
    *this = object;
}

AMateria &AMateria::operator=(const AMateria &object)
{
    if (this == &object)
        return (*this);
    type = "AMateria";
    std::cout << "AMateria was copied " <<std::endl;
    return (*this);
}
