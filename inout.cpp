#include <iostream>
#include "define.h"


const std::string lable::cmd = "Введите команду ('+', '-', '=' или 'x'): ";
const std::string lable::err_cmd = "Неверный ввод команды, пожалуйста повторите ввод.";
const std::string lable::quit = "До свидания!";


char firstCharInStr(std::string* s)
{
	const char* arr = s->c_str();

	return arr[0];
}

void inOut(Counter& obj, cmd* oper)
{
	std::string in_user = "";
	bool check = false;

	do
	{
		std::cout << lable::cmd;
		std::cin >> in_user;

		char cmd = firstCharInStr(&in_user);

		check = cmd == '+' || cmd == '-' || cmd == '=' || cmd == 'x';
		if (check)
		{
			if (cmd == '+')
			{
				obj.inc();
				*oper = cmd::inc;
				check = false;
			}
			if (cmd == '-')
			{
				obj.dec();
				*oper = cmd::dec;
				check = false;	
			}
			if (cmd == '=')
			{
				int count = obj.view();
				std::cout << count << std::endl;
				*oper = cmd::view;
				check = false;
			}
			if (cmd == 'x')
			{
				std::cout << lable::quit << std::endl;
				*oper = cmd::quit;
				check = false;
			}
		}
		else
		{
			std::cout << lable::err_cmd << std::endl;
			check = false;
		}

	}
	while (check);
}
