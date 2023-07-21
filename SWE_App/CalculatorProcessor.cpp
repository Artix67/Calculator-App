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
		operatorStack.push(tokens->front());
		tokens->pop_front();
	}
	else if (tokens->front() == "(") {
		operatorStack.push(tokens->front());
		tokens->pop_front();
	}
	else if (tokens->front() == ")") {

		std::list<std::string> reorderList;

		while (!operatorStack.empty()) {

			if (operatorStack.top() == "(") {
				break;
			}

			else if (operatorStack.top() == "+" || operatorStack.top() == "-") {
				reorderList.push_back(operatorStack.top());
				operatorStack.pop();
			}
		}

		std::list<std::string>::iterator listIndex;

			for (listIndex = reorderList.begin(); listIndex != reorderList.end();) {

				if (*listIndex == "(") {
					operatorStack.pop();
					break;
				}

				outputQueue.push(*listIndex);
				reorderList.erase(listIndex);
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

std::stack<float> CalculatorProcessor::inputCalculation(std::string inputString) {

	std::stack<float> result;
	std::list<std::string>* tokens {};
	std::queue<std::string> outputQueue;
	std::stack<std::string> operatorStack;

	if (CalculatorProcessor::TokenizeInput(inputString, tokens)) {

		std::string numberA;
		std::string numberB;

		while (!tokens->empty()) {

			for (int i = 0; i < tokens->front().length(); i++) {

				if (IsNumeric(tokens->front()[i])) {
					outputQueue.push(tokens->front());
					tokens->pop_front();
					break;
				}
				else {
					CalculatorProcessor::precedence(operatorStack, outputQueue, tokens);
				}
			}
			
			if (outputQueue.size() <= 1) {

				if (outputQueue.front() == "Tan"
					|| outputQueue.front() == "Cos"
					|| outputQueue.front() == "Sin"
					|| outputQueue.front() == "Mod") {

					int advanceOperand;

					if (outputQueue.front() == "Tan") {
						advanceOperand = 1;
						outputQueue.pop();
					}
					else if (outputQueue.front() == "Cos") {
						advanceOperand = 2;
						outputQueue.pop();
					}
					else if (outputQueue.front() == "Sin") {
						advanceOperand = 3;
						outputQueue.pop();
					}
					else if (outputQueue.front() == "Mod") {
						advanceOperand = 4;
						outputQueue.pop();
					}

					switch (advanceOperand) {
					case 1:
						outputQueue.push(std::to_string((tan(std::stof(outputQueue.front())))));
						break;
					case 2:
						outputQueue.push(std::to_string((cos(std::stof(outputQueue.front())))));
						break;
					case 3:
						outputQueue.push(std::to_string((sin(std::stof(outputQueue.front())))));
						break;
					case 4:
						float firstNum = std::stof(outputQueue.front());
						outputQueue.pop();
						if (!outputQueue.empty()) {
							outputQueue.push(std::to_string(fmod(firstNum, std::stof(outputQueue.front()))));
							break;
						}
						else {

							break;
						}
					}
				}

				else if (outputQueue.front() == "+"
						|| outputQueue.front() == "-"
						|| outputQueue.front() == "/"
						|| outputQueue.front() == "*") {

						int operand;
						if (outputQueue.front() == "+") {
							operand = 1;
							outputQueue.pop();
						}
						else if (outputQueue.front() == "-") {
							operand = 2;
							outputQueue.pop();
						}
						else if (outputQueue.front() == "/") {
							operand = 3;
							outputQueue.pop();
						}
						else if (outputQueue.front() == "*") {
							operand = 4;
							outputQueue.pop();
						}

						float firstNum = std::stof(outputQueue.front());

						switch (operand) {
						case 1:
							outputQueue.pop();
							if (!outputQueue.empty()) {
								outputQueue.push(std::to_string(firstNum + std::stof(outputQueue.front())));
								break;
							}
							else {

								break;
							}

						case 2:
							outputQueue.pop();
							if (!outputQueue.empty()) {
								outputQueue.push(std::to_string(firstNum - std::stof(outputQueue.front())));
								break;
							}
							else {

								break;
							}

						case 3:
							outputQueue.pop();
							if (!outputQueue.empty()) {
								outputQueue.push(std::to_string(firstNum / std::stof(outputQueue.front())));
								break;
							}
							else {

								break;
							}

						case 4:
							outputQueue.pop();
							if (!outputQueue.empty()) {
								outputQueue.push(std::to_string(firstNum * std::stof(outputQueue.front())));
								break;
							}
							else {
									
								break;
							}
						}
                     }
			}
		}
	}

	result.push(std::stof(outputQueue.front()));
	return result;
}
