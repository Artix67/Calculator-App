#pragma once
#include "wx/wx.h"
#include <string>
#include <list>
#include <stack>

class CalculatorProcessor
{

public:

	CalculatorProcessor();
	~CalculatorProcessor();
	bool TokenizeInput(std::string inputString, std::list<std::string>* tokens);
	float inputCalculation(std::string inputString);
	bool isOperator(char inputChar);
	bool IsNumeric(char inputChar);
	bool ContainsMultipleDecimalPoints(std::string token);
	void precedence(std::list<std::string> numbers, std::list<std::string> operators, std::string sub);
};

