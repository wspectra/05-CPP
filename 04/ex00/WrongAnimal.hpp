#pragma once
#include <iostream>
class WrongAnimal {
protected:
    std::string type;
public:
    WrongAnimal(void);
    WrongAnimal(const WrongAnimal &object);
    ~WrongAnimal();
    WrongAnimal &operator=(const WrongAnimal &object);

    void makeSound() const;
    std::string getType() const;
};
