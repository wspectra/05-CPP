#include "Karen.hpp"
Karen::Karen() {}

Karen::~Karen() {}

void Karen::filter(int level, void (Karen::*complains[4])(void))
{
	while (level < 4)
	{
		display_level(level);
		(this->*complains[level])();
		level++;
		std::cout << std::endl;
	}
}

void Karen::complain( std::string level)
{
	int lvl = get_index(level);
	complains[0] = &Karen::debug;
	complains[1] = &Karen::info;
	complains[2] = &Karen::warning;
	complains[3] = &Karen::error;
	switch (lvl)
	{
		case 0:
			filter(lvl, complains);
			break;
		case 1:
			filter(lvl, complains);
			break;
		case 2:
			filter(lvl, complains);
			break;
		case 3:
			filter(lvl, complains);
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;


	}

}

void Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
