#include <iostream>
#include "define.h"


int main() {
	Name obj;

	while(true)
	{
		initObj(&obj, nvar::num1);
		outObj(&obj);
	}
 
  return 0;
}
