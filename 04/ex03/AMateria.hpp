#pragma once
class AMateria {
protected:
public:
    AMateria(std::string const & type);
    AMateria(void);
    AMateria(const AMateria &object);
    virtual ~AMateria();
    AMateria &operator=(const AMateria &object);

    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};
