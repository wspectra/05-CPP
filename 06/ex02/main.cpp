#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


int main( void )
{
	Base b1;
	Base* ptr = b1.generate();
	Base& ref = *ptr;
	identify(ptr);
	identify(ref);
}
