#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain " << "created" << std::endl;
    ideas_nb = 0;
}

Brain::~Brain()
{
    std::cout << "Brain " << "deleted" << std::endl;
}

Brain::Brain(const Brain &object)
{
    *this = object;
}

Brain &Brain::operator=(const Brain &object)
{
    if (this == &object)
        return (*this);
    for (int i = 0; i < 100; i++)
        ideas[i] = object.ideas[i];
    ideas_nb = object.ideas_nb;
    std::cout << "Brain was copied " <<std::endl;
    return (*this);
}

std::string *Brain::getIdeas()
{
    return (ideas);
}

void Brain::setIdeas(std::string idea)
{
    if (ideas_nb == 100)
        return;
    ideas[ideas_nb] = idea;
    ideas_nb++;
}
