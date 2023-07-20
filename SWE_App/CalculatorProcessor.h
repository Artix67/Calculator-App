#pragma once
class CalculatorProcessor
{
public:

	CalculatorProcessor();
	~CalculatorProcessor();
	bool TokenizeInput(std::string inputString, std::list<std::string>* tokens);

};

