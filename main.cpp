#include <iostream>
#include "define.h"


int main() {
	Counter obj = objInit();

	cmd oper = cmd::start;

	while(oper)
	{
		inOut(&obj, &oper);
	}
 
  return 0;
}
