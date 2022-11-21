#include "define.h"

Counter::Counter(int start)
{
	this->count = start;
}

void Counter::inc()
{
	++this->count;
}

void Counter::dec()
{
	--this->count;
}

int Counter::view()
{
	return this->count;
}
