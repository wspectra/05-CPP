#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

class Base {
public:
	virtual ~Base();
	Base *generate();
};

void identify(Base* p);
void identify(Base& p);
