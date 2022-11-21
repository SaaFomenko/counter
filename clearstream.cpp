#include <iostream>
#include "define.h"


void clearStream()
{
	if(char(std::cin.peek()) == '\n') std::cin.ignore();

	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(32767, '\n');
	}
}

