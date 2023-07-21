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

bool CalculatorProcessor::TokenizeInput(std::string inputString, std::list<Token>* tokens) {

	for (size_t i = 0; i < inputString.length(); i++) {

		char debugChar = inputString[i];
		int remainingCharacters = inputString.length() - i;

		if (remainingCharacters >= 3) {

			std::string advancedOperand = inputString.substr(i, 3);

			if (advancedOperand == "Tan"
				|| advancedOperand == "Mod"
				|| advancedOperand == "Sin"
				|| advancedOperand == "Cos") {

				tokens->push_back(Token(Token::Function, advancedOperand));
				i += 2;
				continue;
			}
		}

		if (IsNumeric(inputString[i])) {

			std::string tokenValue = std::string(1, inputString[i]);

			for (size_t j = i + 1; j < inputString.length(); j++) {

				if (IsNumeric(inputString[j])) {
					tokenValue += inputString[j];
					i++;
				}
				else {
					break;
				}
			}

			if (tokenValue == "."
				|| ContainsMultipleDecimalPoints(tokenValue)) {
				errorResult = false;
				return false;
			}

			tokens->push_back(Token(Token::Number ,tokenValue));
			continue;
		}
		else if (inputString[i] == '(' || inputString[i] == ')') {
			tokens->push_back(Token(Token::Parentheses, std::string(1, inputString[i])));
		}
		else {
			tokens->push_back(Token(Token::Operator,std::string(1, inputString[i])));
		}
	}
	return true;
}

bool CalculatorProcessor::ContainsMultipleDecimalPoints(std::string token) {

	int decimalCount = 0;
	for (size_t i = 0; i < token.length() && decimalCount < 2; i++) {

		if (token[i] == '.') {
			decimalCount++;
		}
	}

	return decimalCount > 1;
}

bool CalculatorProcessor::nextNonLeftParenthesesOperatorExists(std::stack<Token>* operatorStack) {

	if (operatorStack->empty() 
		|| operatorStack->top().value == "(" 
		|| operatorStack->top().type == Token::Number 
		|| operatorStack->top().type == Token::Function) {

		return false;
	}

	return true;
}

bool CalculatorProcessor::IsNumeric(char inputChar) {

	return isdigit(inputChar) || inputChar == '.';
}

int CalculatorProcessor::precendenceValue(std::string value) {

	if (value == "*") {
		return 1;
	}
	else if (value == "/") {
		return 1;
	}
	else if (value == "-") {
		return 2;
	}
	else if (value == "+") {
		return 2;
	}
	else {
		return 99;
	}
}

bool CalculatorProcessor::isLeftAssociative(Token token) {
	if (token.value == "+" 
		|| token.value == "-" 
		|| token.value == "*" 
		|| token.value == "/") {
		return true;
	}
	return false;
}

int CalculatorProcessor::precedence(Token op1, Token op2) {

	int op1PrecedenceValue = precendenceValue(op1.value);
	int op2PrecedenceValue = precendenceValue(op2.value);

	if (op1PrecedenceValue < op2PrecedenceValue) {
		return 1;
	}
	else if (op1PrecedenceValue == op2PrecedenceValue) {
		return 0;
	}
	else if (op1PrecedenceValue > op2PrecedenceValue) {
		return -1;
	}
	return 99;
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

bool CalculatorProcessor::errorCheck() {

	CalculatorProcessor Calculator;
	if (Calculator.errorResult == false) {
		return false;
	}
	else {
		return true;
	}
}

std::string calculateResult(std::queue<Token>* outputQueue) {
	std::string boo = "boo";
	return boo;
}


std::string CalculatorProcessor::inputCalculation(std::string inputString) {

	std::list<Token>* tokens = new std::list<Token>();
	std::queue<Token>* outputQueue = new std::queue<Token>();
	std::stack<Token>* operatorStack = new std::stack<Token>();

	if (CalculatorProcessor::TokenizeInput(inputString, tokens)) {

		while (!tokens->empty()) {

			Token t = tokens->front();
			tokens->pop_front();

			if (t.type == Token::Number) {
				outputQueue->push(t);
			}
			else if (t.type == Token::Function) {
				operatorStack->push(t);
			}
			else if (t.type == Token::Operator) {

				while (nextNonLeftParenthesesOperatorExists(operatorStack) 
					&& (precedence(operatorStack->top(), t) == 1 
						|| (precedence(operatorStack->top(), t) == 0 && isLeftAssociative(t)))) {
					outputQueue->push(operatorStack->top());
					operatorStack->pop();
				}
				operatorStack->push(t);
			}
			else if (t.value == "(") {
				operatorStack->push(t);
			}
			else if (t.value == ")") {
				if (operatorStack->empty()) {
					errorResult = false;
					break;
				}
				while (!operatorStack->empty() && operatorStack->top().value != "(") {
					outputQueue->push(operatorStack->top());
					operatorStack->pop();
				}

				if (operatorStack->empty() || operatorStack->top().value != "(") {
					errorResult = false;
					break;
				}

				operatorStack->pop();

				if (operatorStack->top().type == Token::Function) {
					outputQueue->push(operatorStack->top());
					operatorStack->pop();
				}
			}
		}

		if (errorResult == true) {
			while (!operatorStack->empty()) {
				if (operatorStack->top().value == "(") {
					errorResult = false;
					break;
				}
				outputQueue->push(operatorStack->top());
				operatorStack->pop();
			}
		}
	}
	else {
		errorResult = false;
	}



	std::string result = outputQueue->front().value;
	delete tokens;
	delete operatorStack;
	delete outputQueue;
	return result;
}
