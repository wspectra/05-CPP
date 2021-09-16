#include "MainHeader.hpp"

MateriaSource::MateriaSource(void)
{
	bzero(src, sizeof(AMateria*) * 4);
	nb_src = 0;
}

MateriaSource::~MateriaSource()
{
	while (nb_src >= 0)
		delete src[nb_src--];
}

MateriaSource::MateriaSource(const MateriaSource &object)
{
	*this = object;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &object)
{
	if (this == &object)
		return (*this);
	while (nb_src != 0)
		delete src[nb_src--];
	while (nb_src < 4)
		src[nb_src] = object.src[nb_src]->clone();
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (nb_src < 4)
		src[nb_src++] = materia;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (src[i] && src[i]->getType().compare(type) == 0)
			return (src[i]->clone());
	}
	return (0);
}
