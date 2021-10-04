#include <iostream>
#include "Bureaucrat.hpp"

int main( void )
{
    try
    {
        Bureaucrat mike("Mike", 170);
    }
    catch (std::exception& b)
    {
        std::cout << b.what() << std::endl;
    }
    try
    {
        Bureaucrat mike("Mike", 0);
    }
    catch (std::exception& b)
    {
        std::cout << b.what() << std::endl;
    }
    Bureaucrat ann("Ann", 150);
    Bureaucrat bob("Bob", 1);
    Bureaucrat kate("Kate", 17);
    std::cout << ann;
    std::cout << bob;
    std::cout << kate;
    try
    {
        ann.decreaseGrade();
    }
    catch (std::exception& b)
    {
        std::cout << b.what() << std::endl;
    }
    try
    {
        bob.increaseGrade();
    }
    catch (std::exception& b)
    {
        std::cout << b.what() << std::endl;
    }
    try
    {
        kate.increaseGrade();
        std::cout << kate;
        kate.decreaseGrade();
        std::cout << kate;
    }
    catch (std::exception& b)
    {
        std::cout << b.what() << std::endl;
    }
}
