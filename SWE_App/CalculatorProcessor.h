#pragma once
#include "CalculatorProcessor.h"
#include "wx/wx.h"
#include <string>
#include <list>
#include <stack>
#include <queue>

class CalculatorProcessor
{
public:

	CalculatorProcessor();
	~CalculatorProcessor();
	bool TokenizeInput(std::string inputString, std::list<std::string>* tokens);
	bool ContainsMultipleDecimalPoints(std::string token);
	bool IsNumeric(char inputChar);
	void precedence(std::stack<std::string> operatorStack, std::queue<std::string> outputQueue, std::list<std::string>* tokens);
	bool isOperator(char inputChar);
	std::stack<float> inputCalculation(std::string inputString);
};

