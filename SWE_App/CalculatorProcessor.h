#pragma once
#include "wx/wx.h"
#include <string>
#include <list>
#include <stack>
#include <queue>

class CalculatorProcessor
{

public:
	bool errorResult;
	CalculatorProcessor();
	~CalculatorProcessor();
	bool TokenizeInput(std::string inputString, std::list<std::string>* tokens);
	bool ContainsMultipleDecimalPoints(std::string token);
	bool IsNumeric(char inputChar);
	bool precedence(std::stack<std::string> operatorStack, std::list<std::string>* tokens);
	bool isOperator(char inputChar);
	std::string inputCalculation(std::string inputString);
	bool errorCheck();
};

