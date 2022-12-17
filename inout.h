#pragma once

#if !defined(IN_OUT)
#define IN_OUT

#include <string>
#include "counter.h"

struct lable
{
  static const std::string start;
	static const std::string start_val;
	static const std::string cmd;
	static const std::string quit;
	static const std::string err_val;
	static const std::string err_cmd;
};

enum cmd
{
	quit,
	start,
	inc,
	dec,
	view
};

void inOut(Counter& obj, cmd* oper);

#endif
