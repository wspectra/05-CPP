#pragma once
#include <iostream>
class Karen {
public:
	Karen();
	~Karen();
	void complain(std::string level);

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void (Karen::*complains[4])(void);
};

std::string *get_messages();
int get_index(std::string level);