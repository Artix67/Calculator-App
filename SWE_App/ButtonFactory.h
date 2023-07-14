
#include "Window.h"

class ButtonFactory
{

public:

	ButtonFactory();
	~ButtonFactory();

	wxButton* zeroButton = nullptr;
	wxButton* oneButton = nullptr;
	wxButton* twoButton = nullptr;
	wxButton* threeButton = nullptr;
	wxButton* fourButton = nullptr;
	wxButton* fiveButton = nullptr;
	wxButton* sixButton = nullptr;
	wxButton* sevenButton = nullptr;
	wxButton* eightButton = nullptr;
	wxButton* nineButton = nullptr;
	wxButton* decimalButton = nullptr;
	wxButton* plusButton = nullptr;
	wxButton* minusButton = nullptr;
	wxButton* divideButton = nullptr;
	wxButton* multiplyButton = nullptr;
	wxButton* equalButton = nullptr;
	wxButton* backspaceBbutton = nullptr;
	wxButton* clearBbutton = nullptr;
	wxButton* modButton = nullptr;
	wxButton* sinButton = nullptr;
	wxButton* cosButton = nullptr;
	wxButton* tanButton = nullptr;

	wxButton CreateZeroButton(Window frame);
	wxButton CreateOneButton();
	wxButton CreateTwoButton();
	wxButton CreateThreeButton();
	wxButton CreateFourButton();
	wxButton CreateFiveButton();
	wxButton CreateSixButton();
	wxButton CreateSevenButton();
	wxButton CreateEightButton();
	wxButton CreateNineButton();
	wxButton CreatePlusButton();
	wxButton CreateMinusButton();
	wxButton CreateMultiplyButton();
	wxButton CreateDivideButton();
	wxButton CreateBackspaceButton();
	wxButton CreateClearButton();
	wxButton CreateModButton();
	wxButton CreateCosButton();
	wxButton CreateSinButton();
	wxButton CreateTanButton();
};

