#pragma once

#if !defined(COUNTER)
#define COUNTER


class Counter
{
	private:
		int count;
	public:
		Counter();
		Counter(int);
		void inc();
		void dec();
		int view();
};

#endif
