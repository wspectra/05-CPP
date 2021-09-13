#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{
    const Animal* meta = new Animal();
    std::cout <<"TYPE: " << meta->getType() << " " << std::endl;
    meta->makeSound();
    delete meta;
    std::cout << "======================================" << std::endl;
    const Animal* j = new Dog();
    std::cout << "TYPE: "<< j->getType() << " " << std::endl;
    j->makeSound();
    delete j;
    std::cout << "======================================" << std::endl;
    const Animal* i = new Cat();
    std::cout << "TYPE: "<< i->getType() << " " << std::endl;
    i->makeSound();
    delete i;
    std::cout << "======================================" << std::endl;
    const WrongAnimal* wrong = new WrongAnimal();
    std::cout <<"TYPE: " << wrong->getType() << " " << std::endl;
    wrong->makeSound();
    delete wrong;
    std::cout << "======================================" << std::endl;
    const WrongAnimal* wrong_cat = new WrongCat();
    std::cout <<"TYPE: " << wrong_cat->getType() << " " << std::endl;
    wrong_cat->makeSound();
    delete wrong_cat;
    return 0;
}