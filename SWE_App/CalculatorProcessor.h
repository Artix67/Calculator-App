#pragma once
#include "wx/wx.h"
#include <string>
#include <list>
#include <stack>
#include <queue>
#include "Token.h"

class CalculatorProcessor
{

public:
	bool errorResult = true;
	CalculatorProcessor();
	~CalculatorProcessor();
	bool TokenizeInput(std::string inputString, std::list<Token>* tokens);
	bool ContainsMultipleDecimalPoints(std::string token);
	bool IsNumeric(char inputChar);
	int precedence(Token op1, Token op2);
	bool isOperator(char inputChar);
	std::string inputCalculation(std::string inputString);
	bool errorCheck();
	int precendenceValue(std::string value);
	bool nextNonLeftParenthesesOperatorExists(std::stack<Token>* operatorStack);
	bool isLeftAssociative(Token token);
	std::string calculateResult(std::queue<Token>* outputQueue);

};

