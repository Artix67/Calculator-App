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

bool CalculatorProcessor::TokenizeInput(std::string inputString, std::list<std::string>* tokens) {

	for (int i = 0; i < inputString.length(); i++) {

		int remainingCharacters = inputString.length() - i;

		if (remainingCharacters >= 3) {

			std::string advancedOperand = inputString.substr(i, 3);

			if (advancedOperand == "Tan" 
				|| advancedOperand == "Mod" 
				|| advancedOperand == "Sin" 
				|| advancedOperand == "Cos") {

				tokens->push_back(advancedOperand);
				i += 2;
				continue;
			}
		}

		if (IsNumeric(inputString[i])) {

			std::string token = std::string(1, inputString[i]);
			i++;

			for (int j = i; j < inputString.length(); j++) {

				if (IsNumeric(inputString[j])) {
					std::string token;
					token += inputString[j];
					i++;
				}
				else {
					break;
				}
			}

			if (token == "." 
				|| ContainsMultipleDecimalPoints(token)) {

				return false;
			}

			tokens->push_back(token);
			continue;
		}

		tokens->push_back(std::string(1, inputString[i]));
	}

	return true;
}

bool CalculatorProcessor::ContainsMultipleDecimalPoints(std::string token) {

	int decimalCount = 0;
	for (int i = 0; i < token.length() && decimalCount < 2; i++) {
		
		if (token[i] == '.') {
			decimalCount++;
		}
	}

	return decimalCount > 1;
}

bool CalculatorProcessor::IsNumeric(char inputChar) {

	return isdigit(inputChar) || inputChar == '.';
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

bool CalculatorProcessor::isOperator(char inputChar) {

	bool result = false;

	if (inputChar == '+' 
		|| inputChar == '-' 
		|| inputChar == '/' 
		|| inputChar == '*') {

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
