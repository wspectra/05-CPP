#pragma  once
#include "MainHeader.hpp"

class MateriaSource : public IMateriaSource{
private:
	AMateria *src[4];
	int	nb_src;
public:
	MateriaSource(std::string const & type);
	MateriaSource(void);
	MateriaSource(const MateriaSource &object);
	virtual ~MateriaSource();
	MateriaSource &operator=(const MateriaSource &object);

	void learnMateria(AMateria* materia);
	AMateria* createMateria(std::string const & type);
};
