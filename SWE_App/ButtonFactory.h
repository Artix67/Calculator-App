#pragma once
#include "Window.h"
#include "wx/wx.h"

class ButtonFactory
{

public:

	ButtonFactory();
	~ButtonFactory();

	wxButton* CreateZeroButton(Window* frame, wxButton* button);
	wxButton* CreateOneButton(Window* frame, wxButton* button);
	wxButton* CreateTwoButton(Window* frame, wxButton* button);
	wxButton* CreateThreeButton(Window* frame, wxButton* button);
	wxButton* CreateFourButton(Window* frame, wxButton* button);
	wxButton* CreateFiveButton(Window* frame, wxButton* button);
	wxButton* CreateSixButton(Window* frame, wxButton* button);
	wxButton* CreateSevenButton(Window* frame, wxButton* button);
	wxButton* CreateEightButton(Window* frame, wxButton* button);
	wxButton* CreateNineButton(Window* frame, wxButton* button);
	wxButton* CreateDecimalButton(Window* frame, wxButton* button);
	wxButton* CreatePlusButton(Window* frame, wxButton* button);
	wxButton* CreateMinusButton(Window* frame, wxButton* button);
	wxButton* CreateMultiplyButton(Window* frame, wxButton* button);
	wxButton* CreateDivideButton(Window* frame, wxButton* button);
	wxButton* CreateEqualButton(Window* frame, wxButton* button);
	wxButton* CreateBackspaceButton(Window* frame, wxButton* button);
	wxButton* CreateClearButton(Window* frame, wxButton* button);
	wxButton* CreateLeftPButton(Window* frame, wxButton* button);
	wxButton* CreateRightPButton(Window* frame, wxButton* button);
	wxButton* CreateModButton(Window* frame, wxButton* button);
	wxButton* CreateCosButton(Window* frame, wxButton* button);
	wxButton* CreateSinButton(Window* frame, wxButton* button);
	wxButton* CreateTanButton(Window* frame, wxButton* button);
	wxButton* CreateNegButton(Window* frame, wxButton* button);
};			

