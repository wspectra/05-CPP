#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    type = "Cat";
    std::cout << "Cat " << "created" << std::endl;
    brain = new Brain();

}

Cat::Cat(std::string name) : Animal()
{
    type = "Cat";
    this->name = name;
    std::cout << "Cat " << name << " created" << std::endl;
    brain = new Brain();

}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat " << name << " deleted" << std::endl;
}

Cat::Cat(const Cat &object) : Animal()
{
    *this = object;
}

Cat &Cat::operator=(const Cat &object)
{
    if (this == &object)
        return (*this);
    type = "Cat";
	delete brain;
    brain = new Brain(*object.brain);
    std::cout << "Cat was copied " <<std::endl;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "\"MEOW MEOW\"" << std::endl;
}


Brain *Cat::getBrain() const
{
    return (brain);
}

void Cat::setIdea(std::string idea) const
{
    brain->setIdeas(idea);
}

