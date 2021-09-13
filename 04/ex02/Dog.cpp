#include "Dog.hpp"

Dog::Dog(void)
{
    type = "Dog";
    std::cout << "Dog " << "created" << std::endl;
    brain = new Brain();
}

Dog::Dog(std::string name)
{
    type = "Dog";
    this->name = name;
    std::cout << "Dog "<< name << " created" << std::endl;
    brain = new Brain();
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog " << name << " deleted" << std::endl;
}

Dog::Dog(const Dog &object)
{
    *this = object;
}

Dog &Dog::operator=(const Dog &object)
{
    if (this == &object)
        return (*this);
    type = "Dog";
    brain = new Brain(*object.brain);
    std::cout << "Dog was copied " <<std::endl;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "\"WOOF WOOF\"" << std::endl;
}

Brain *Dog::getBrain() const
{
    return (brain);
}

void Dog::setIdea(std::string idea) const
{
    brain->setIdeas(idea);
}

