#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void print_ideas(std::string *ideas)
{
    for(int i = 0; !ideas[i].empty(); i++)
        std::cout << ideas[i] << std::endl;
}

int main( void )
{
    Animal *arr[4];
    arr[0] = new Dog("0");
    arr[1] = new Dog("1");
    arr[2] = new Cat("0");
    arr[3] = new Cat("1");
    for (int i = 0; i < 2; i++)
        ((Dog*)(arr[i]))->setIdea("I`m a cool doggo!");
    for (int i = 2; i < 4; i++)
        ((Cat*)(arr[i]))->setIdea("I`m a cool cat!");
    std::cout << "======================================" << std::endl;
    for (int i = 0; i < 2; i++)
       std::cout << i << " " << ((Dog*)arr[i])->getBrain()->getIdeas()[0] << std::endl;
    for (int i = 2; i < 4; i++)
        std::cout << i << " " << ((Cat*)(arr[i]))->getBrain()->getIdeas()[0] << std::endl;
    std::cout << "======================================" << std::endl;
    for (int i = 0; i < 4; i++)
        delete arr[i];
    std::cout << "======================================" << std::endl;
    Dog v1("v1");
    v1.setIdea("Idea 1");
    v1.setIdea("Idea 2");
    v1.setIdea("Idea 3");
    print_ideas(v1.getBrain()->getIdeas());
    Dog v2("v2");
    v2 = v1;
    print_ideas(v2.getBrain()->getIdeas()); ///будут утечки

    return 0;
}