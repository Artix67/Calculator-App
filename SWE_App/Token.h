#pragma once
#include <string>

struct Token
{
	enum TokenType
	{
		Number,
		Function,
		Operator,
		Parentheses
	};

	TokenType type;
	std::string value;

	Token(TokenType type, std::string value);
	~Token();
};



