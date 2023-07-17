#include "CalculatorProcessor.h"
#include "wx/wx.h"
#include <string>
#include <iterator>
#include <list>
#include <stack>
#include <cmath>

CalculatorProcessor::CalculatorProcessor() {

}

CalculatorProcessor::~CalculatorProcessor() {

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
	std::list<std::string> numbers;
	std::list<std::string> operators;

	for (int i = 0; i < val1; i++) {
		
		inputCopy = inputString;
		sub1 = inputCopy.substr(inputCopy.at(i));

		if (isdigit(inputString.at(i))) {
			numbers.push_back(sub1);
		}

		else if (CalculatorProcessor::isOperator(sub1) || sub1 == "(") {
			CalculatorProcessor::precedence(numbers, operators, sub1);
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

	std::list<std::string>::iterator index;
	std::stack<float> stk;
	std::string strA, strB, temp;
	float a, b;
	char* convertOperand;

	for (index = numbers.begin(); index != numbers.end();) {

		
		if (*index != "Mod" || "Tan" || "Sin" || "Cos" || "+" || "-" || "/" || "*") {

			strA = *index;
			numbers.pop_front();

			if (!numbers.empty()) {
				strB = *index;
				numbers.pop_front();
				b = std::stof(strB);
			}
			
			a = std::stof(strA);
		}
		
		else if (*index == "+" || "-" || "/" || "*" || "Mod") {
			
			int switchVal;

			if (*index == "Mod") {
				switchVal = 1;
			}

			else if (*index == "+") {
				switchVal = 2;
			}

			else if (*index == "-") {
				switchVal = 3;
			}

			else if (*index == "/") {
				switchVal = 4;
			}

			else if (*index == "*") {
				switchVal = 5;
			}

			switch (switchVal)
			{
			case 1:
				stk.push((int)a % (int)b);
				break;
			case 2:
				stk.push(b + a);
				break;
			case 3:
				stk.push(b - a);
				break;
			case 4:
				stk.push(b / a);
				break;
			case 5:
				stk.push(b * a);
				break;
			}
		}

		else if (*index == "Sin" || "Cos" || "Tan") {

			int switchVal;

			if (*index == "Sin") {
				switchVal = 1;
			}

			else if (*index == "Cos") {
				switchVal = 2;
			}

			else if (*index == "Tan") {
				switchVal = 3;
			}

			temp = *index;
			convertOperand = const_cast<char*>(temp.c_str());

			switch (switchVal)
			{
			case 1:
				stk.push(sin(a));
				break;
			case 2:
				stk.push(cos(a));
				break;
			case 3:
				stk.push(tan(a));
				break;
			}
		}
	}

	result = stk.top();

	return result;
}
