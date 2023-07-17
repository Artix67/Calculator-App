#pragma once
#include "wx/wx.h"
#include <string>
#include <list>

class CalculatorProcessor
{
	CalculatorProcessor();
	~CalculatorProcessor();

public:

	float inputCalculation(std::string inputString);
	bool isOperator(std::string inputString);
	void sortOperands(std::list<std::string> operends, std::list<std::string> numbers);
	void precedence();
};

