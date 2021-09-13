#pragma once
#include <iostream>
class Animal {
protected:
    std::string type;
public:
    Animal(void);
    Animal(const Animal &object);
    virtual ~Animal();
    Animal &operator=(const Animal &object);

    virtual void makeSound() const;
    virtual std::string getType() const;
};
