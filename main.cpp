#include <iostream>
#include "counter.h"
#include "inout.h"


const std::string lable::start = "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
const std::string lable::start_val = "Введите начальное значение счётчика: ";
const std::string lable::err_val = "Введено невеное значение счетчика. Пожалуйста введите целое число.";


int main() {
	const std::string quests[] = {
		"нет",
		"да",
	}; 
	std::string resp = "нет";
	Counter obj;

	std::cout << lable::start;
	std::cin >> resp;

	if (resp == quests[cmd::start])
	{
		bool check = false;
		do
		{
			std::cout << lable::start_val;
			std::cin >> resp;
			try 
			{
				int start_val = std::stoi(resp);
				obj = Counter(start_val);
				check = false;
			}
			catch(std::invalid_argument e)
			{
				std::cout << lable::err_val << std::endl;
      
				check = true; 
			}
		}
		while (check);
	}

	cmd oper = cmd::start;

	while(oper)
	{
		inOut(obj, &oper);
	}
 
  return 0;
}
