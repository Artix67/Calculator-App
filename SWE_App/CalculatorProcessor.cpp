#include "CalculatorProcessor.h"
#include "wx/wx.h"
#include <string>
#include <iterator>
#include <list>
#include <stack>

CalculatorProcessor::CalculatorProcessor() {

}

CalculatorProcessor::~CalculatorProcessor() {

}

void CalculatorProcessoor::precedence() {
	
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

void CalculatorProcessor::sortOperands(std::list<std::string> operends, std::list<std::string> numbers) {

	std::list<std::string>::iterator index;

	for (index = operends.begin(); index != operends.end(); ) {

		if (*index == "Tan" || "Cos" || "Sin" || "Mod") {
			numbers.push_back(*index);
			operends.erase(index);
		}

		else if (*index == "*" || "/") {
			numbers.push_back(*index);
			operends.erase(index);
		}

		else if (*index == "+" || "-") {
			numbers.push_back(*index);
			operends.erase(index);
		}
	}
}

float CalculatorProcessor::inputCalculation(std::string inputString) {

	std::string sub1;
	std::string inputCopy;
	int val1 = inputString.length();
	std::list<std::string> numbers;
	std::list<std::string> operators;

	for (int i = 0; i < val1; i++) {
		
		inputCopy = inputString;
		sub1 = inputCopy.substr(inputCopy.at(i));

		if (isdigit(inputString.at(i))) {
			numbers.push_back(sub1);
		}

		else if (isOperator(sub1) || sub1 == "(") {
			operators.push_back(sub1);
		}

		else if (sub1 == ")") {

			std::list<std::string>::iterator index;

			for (index = operators.begin(); index != operators.end(); index++) {
				
				if (*index == "(") {
					index++;
					numbers.push_back(*index);
					index--;
					operators.erase(index);
				}
				break;
			}

		}
	}

	sortOperands(operators, numbers);

	int a, b;
	std::stack<float> result;
	std::list<std::string>::iterator index;
	for (index = numbers.begin(); index != numbers.end(); index++) {

		if (isOperator(*index)) {
			a = result.top();
			result.pop();
			b = result.top();
			result.pop();
			result.push(mathOperation(a, b, *index));
		}

		else if (isOperand(*it) > 0) {
			stk.push(scanNum(*it));
		}
	}

	return result;
}
