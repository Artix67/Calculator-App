#pragma once
#include "wx/wx.h"



class Window : public wxFrame
{


private:

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

	wxTextCtrl* inputBox = nullptr;

	wxListBox* outputBox = nullptr;

	wxDECLARE_EVENT_TABLE();


public:

	Window();

	void OnButtonClicked(wxCommandEvent &evt);

};

