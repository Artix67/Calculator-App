#pragma once
#include <string>

struct Token
{
	enum TokenType
	{
		Number,
		Function,
		Operator,
		Parentheses,
		Comma
	};

	TokenType type;
	std::string value;

	Token(TokenType type, std::string value);
	~Token();
};



