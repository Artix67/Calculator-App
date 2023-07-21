#include "Token.h"

Token::Token(TokenType newType, std::string newValue) {

	type = newType;
	value = newValue;
}

Token::~Token() {

}