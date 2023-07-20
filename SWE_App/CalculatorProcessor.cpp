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

void CalculatorProcessor::precedence(std::stack<std::string> operatorStack, std::queue<std::string> outputQueue, std::list<std::string>* tokens) {

	if (tokens->front() == "Tan" || "Mod" || "Sin" || "Cos") {
		operatorStack.push(*tokens->front());
		tokens->pop_front();
	}
	else if (tokens->front() == "(") {
		operatorStack.push(*tokens->front());
		tokens->pop_front();
	}
	else if (tokens->front() == ")") {

		std::stack<std::string>::iterator index;
		std::list<std::string> reorderList;

		for (index = operatorStack.top(); index == "("; index--) {

			if (index == "+" || index == "-") {
				reorderList.push_back(*index);
			}
		}

		std::list<std::string>::iterator listIndex

			for (listIndex = reorderList.begin(); listIndex != reorderList.end();) {

				if (listIndex == "(") {
					operatorStack.pop();
					break;
				}

				outputQueue.push(*listIndex);
				operatorStack.pop();
				reorderList.erase(listIndex);
			}

		for (listIndex = reorderList.begin(); listIndex != reorderList.end(); listIndex++) {
			operatorStack.pop();
		}
		reorderList.clear();
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
	std::list<std::string>* tokens;
	std::queue<std::string> outputQueue;
	std::stack<std::string> operatorStack;

	if (CalculatorProcessor::TokenizeInput(inputString, tokens)) {

		while (!tokens->empty()) {

			for (int = i; i < tokens->front().length(); i++) {

				if (IsNumeric(tokens->front()[i])) {
					outputQueue.push(*tokens->front);
					tokens->pop_front();
					break;
				}
				else {
					CalculatorProcessor::precedence(outputQueue, operatorStack, tokens)
				}
			}
		}


	}


	return result;
}
