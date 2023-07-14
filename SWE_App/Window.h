
#pragma once
#include "wx/wx.h"



class Window : public wxFrame
{

public:

	Window();
	~Window();
	wxTextCtrl* outputScreen = nullptr;
	wxDECLARE_EVENT_TABLE();

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
	wxButton* backspaceButton = nullptr;
	wxButton* clearButton = nullptr;
	wxButton* modButton = nullptr;
	wxButton* sinButton = nullptr;
	wxButton* cosButton = nullptr;
	wxButton* tanButton = nullptr;

	void ZeroButtonClicked(wxCommandEvent& evt);
	void OneButtonClicked(wxCommandEvent& evt);
	void TwoButtonClicked(wxCommandEvent& evt);
	void ThreeButtonClicked(wxCommandEvent& evt);
	void FourButtonClicked(wxCommandEvent& evt);
	void FiveButtonClicked(wxCommandEvent& evt);
	void SixButtonClicked(wxCommandEvent& evt);
	void SevenButtonClicked(wxCommandEvent& evt);
	void EightButtonClicked(wxCommandEvent& evt);
	void NineButtonClicked(wxCommandEvent& evt);
	void DecimalButtonClicked(wxCommandEvent& evt);
	void PlusButtonClicked(wxCommandEvent& evt);
	void MinusButtonClicked(wxCommandEvent& evt);
	void DivideButtonClicked(wxCommandEvent& evt);
	void MultiplyButtonClicked(wxCommandEvent& evt);
	void EqualButtonClicked(wxCommandEvent& evt);
	void BackspaceButtonClicked(wxCommandEvent& evt);
	void ClearButtonClicked(wxCommandEvent& evt);
	void ModButtonClicked(wxCommandEvent& evt);
	void SinButtonClicked(wxCommandEvent& evt);
	void CosButtonClicked(wxCommandEvent& evt);
	void TanButtonClicked(wxCommandEvent& evt);
};

