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
	std::list<std::string> TokenizeInput(std::string inputString);
	float inputCalculation(std::string inputString);
	bool isOperator(std::string inputString);
	void precedence(std::list<std::string> numbers, std::list<std::string> operators, std::string sub);
};

