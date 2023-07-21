#pragma once
#include <string>

enum TokenType
{
	Number,
	Function,
	Operator,
};

struct Token
{
	TokenType type;
	std::string value;
};

