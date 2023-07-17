#pragma once
#include "wx/wx.h"
#include <string>
#include <list>
#include <stack>

class CalculatorProcessor
{
	CalculatorProcessor();
	~CalculatorProcessor();

public:

	std::stack<float> inputCalculation(std::string inputString);
	bool isOperator(std::string inputString);
	void precedence(std::list<std::string> numbers, std::list<std::string> operators, std::string sub);
};

