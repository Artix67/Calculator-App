#include "CalculatorProcessor.h"
#include "wx/wx.h"
#include <string>
#include <iterator>
#include <list>
#include <stack>
#include <cmath>
#include <queue>

CalculatorProcessor::CalculatorProcessor() {

}

CalculatorProcessor::~CalculatorProcessor() {

}

std::list<std::string> CalculatorProcessor::TokenizeInput(std::string inputString) {

	for (int i = 0; i < inputString.length(); i++) {

		int remainingCharacters = inputString.length() - i;

		if (remainingCharacters > 3) {

			std::string advancedOperand = inputString.substr(i, 3);

			if (advancedOperand == "Tan" 
				|| advancedOperand == "Mod" 
				|| advancedOperand == "Sin" 
				|| advancedOperand == "Cos") {

			}
		}
	}
}

void CalculatorProcessor::precedence(std::list<std::string> numbers, std::list<std::string> operators, std::string sub) {
	
	if (sub == "Tan" || "Mod" || "Sin" || "Cos") {
		operators.push_front(sub);
	}

	else if (sub == "(") {
		operators.push_back(sub);
	}

	else {

		std::list<std::string>::iterator index;

		for (index = operators.end(); index != operators.begin(); index--) {

			if (*index == "+" || "-" && sub == "*" || "/") {
				operators.push_back(sub);
				break;
			}

			else if (*index == "*" || "/" && sub == "+" || "-") {
				numbers.push_back(*index);
				operators.erase(index);
				operators.push_back(sub);
				break;
			}
		}
	}
}

bool CalculatorProcessor::isOperator(std::string inputString) {

	bool result = false;

	if (inputString == "+") {
		result = true;
	}

	else if (inputString == "-") {
		result = true;
	}

	else if (inputString == "/") {
		result = true;
	}

	else if (inputString == "*") {
		result = true;
	}

	else if (inputString == "Mod") {
		result = true;
	}

	else if (inputString == "Tan") {
		result = true;
	}

	else if (inputString == "Sin") {
		result = true;
	}

	else if (inputString == "Cos") {
		result = true;
	}

	return result;
}

float CalculatorProcessor::inputCalculation(std::string inputString) {

	float result;
	std::string sub1;
	std::string inputCopy;
	int val1 = inputString.length();
	std::queue<std::string> outputQueue;
	std::stack<std::string> operatorStack;

	//while()

	return result;
}
