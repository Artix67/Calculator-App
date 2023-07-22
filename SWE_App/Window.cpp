#include "Window.h"
#include "App.h"
#include <string>
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"

wxBEGIN_EVENT_TABLE(Window, wxFrame)


	EVT_BUTTON(0, ZeroButtonClicked)
	EVT_BUTTON(1, OneButtonClicked)
	EVT_BUTTON(2, TwoButtonClicked)
	EVT_BUTTON(3, ThreeButtonClicked)
	EVT_BUTTON(4, FourButtonClicked)
	EVT_BUTTON(5, FiveButtonClicked)
	EVT_BUTTON(6, SixButtonClicked)
	EVT_BUTTON(7, SevenButtonClicked)
	EVT_BUTTON(8, EightButtonClicked)
	EVT_BUTTON(9, NineButtonClicked)
	EVT_BUTTON(10, DecimalButtonClicked)
	EVT_BUTTON(11, PlusButtonClicked)
	EVT_BUTTON(12, MinusButtonClicked)
	EVT_BUTTON(13, DivideButtonClicked)
	EVT_BUTTON(14, MultiplyButtonClicked)
	EVT_BUTTON(15, EqualButtonClicked)
	EVT_BUTTON(16, BackspaceButtonClicked)
	EVT_BUTTON(17, ClearButtonClicked)
	EVT_BUTTON(18, ModButtonClicked)
	EVT_BUTTON(19, SinButtonClicked)
	EVT_BUTTON(20, CosButtonClicked)
	EVT_BUTTON(21, TanButtonClicked)
	EVT_BUTTON(22, LeftPButtonClicked)
	EVT_BUTTON(23, RightPButtonClicked)
	EVT_BUTTON(24, CommaButtonClicked)

wxEND_EVENT_TABLE()


Window::Window() : wxFrame(nullptr, 30, "Calculator", wxPoint(200, 200), wxSize(595, 390)) {

	ButtonFactory factory;
	
	
	zeroButton = factory.CreateZeroButton(this, zeroButton);
	oneButton = factory.CreateOneButton(this, oneButton);
	twoButton = factory.CreateTwoButton(this, twoButton);
	threeButton = factory.CreateThreeButton(this, threeButton);
	fourButton = factory.CreateFourButton(this, fourButton);
	fiveButton = factory.CreateFiveButton(this, fiveButton);
	sixButton = factory.CreateSixButton(this, sixButton);
	sevenButton = factory.CreateSevenButton(this, sevenButton);
	eightButton = factory.CreateEightButton(this, eightButton);
	nineButton = factory.CreateNineButton(this, nineButton);
	decimalButton = factory.CreateDecimalButton(this, decimalButton);
	leftPButton = factory.CreateLeftPButton(this, leftPButton);
	rightPButton = factory.CreateRightPButton(this, rightPButton);
	plusButton = factory.CreatePlusButton(this, plusButton);
	minusButton = factory.CreateMinusButton(this, minusButton);
	divideButton = factory.CreateDivideButton(this, divideButton);
	multiplyButton = factory.CreateMultiplyButton(this, multiplyButton);
	equalButton = factory.CreateEqualButton(this, equalButton);
	backspaceButton = factory.CreateBackspaceButton(this, backspaceButton);
	clearButton = factory.CreateClearButton(this, clearButton);
	modButton = factory.CreateModButton(this, modButton);
	sinButton = factory.CreateSinButton(this, sinButton);
	cosButton = factory.CreateCosButton(this, cosButton);
	tanButton = factory.CreateTanButton(this, tanButton);
	commaButton = factory.CreateCommaButton(this, commaButton);

	outputScreen = new wxTextCtrl(this, 14, "", wxPoint(30, 30), wxSize(525, 50), wxTE_READONLY);
}


Window::~Window() {

}

void Window::ZeroButtonClicked(wxCommandEvent& evt) {
	wxString selectedText = "0";
	outputScreen->AppendText(selectedText);
	evt.Skip();
}

void Window::OneButtonClicked(wxCommandEvent& evt) {
	wxString selectedText = "1";
	outputScreen->AppendText(selectedText);
	evt.Skip();
}

void Window::TwoButtonClicked(wxCommandEvent& evt) {
	wxString selectedText = "2";
	outputScreen->AppendText(selectedText);
	evt.Skip();
}

void Window::ThreeButtonClicked(wxCommandEvent& evt) {
	wxString selectedText = "3";
	outputScreen->AppendText(selectedText);
	evt.Skip();
}

void Window::FourButtonClicked(wxCommandEvent& evt) {
	wxString selectedText = "4";
	outputScreen->AppendText(selectedText);
	evt.Skip();
}

void Window::FiveButtonClicked(wxCommandEvent& evt) {
	wxString selectedText = "5";
	outputScreen->AppendText(selectedText);
	evt.Skip();
}

void Window::SixButtonClicked(wxCommandEvent& evt) {
	wxString selectedText = "6";
	outputScreen->AppendText(selectedText);
	evt.Skip();
}

void Window::SevenButtonClicked(wxCommandEvent& evt) {
	wxString selectedText = "7";
	outputScreen->AppendText(selectedText);
	evt.Skip();
}

void Window::EightButtonClicked(wxCommandEvent& evt) {
	wxString selectedText = "8";
	outputScreen->AppendText(selectedText);
	evt.Skip();
}

void Window::NineButtonClicked(wxCommandEvent& evt) {
	wxString selectedText = "9";
	outputScreen->AppendText(selectedText);
	evt.Skip();
}

void Window::DecimalButtonClicked(wxCommandEvent& evt) {
	wxString selectedText = ".";
	outputScreen->AppendText(selectedText);
	evt.Skip();
}

void Window::PlusButtonClicked(wxCommandEvent& evt) {
	wxString selectedText = "+";
	outputScreen->AppendText(selectedText);
	evt.Skip();
}

void Window::MinusButtonClicked(wxCommandEvent& evt) {
	wxString selectedText = "-";
	outputScreen->AppendText(selectedText);
	evt.Skip();
}

void Window::DivideButtonClicked(wxCommandEvent& evt) {
	wxString selectedText = "/";
	outputScreen->AppendText(selectedText);
	evt.Skip();
}

void Window::MultiplyButtonClicked(wxCommandEvent& evt) {
	wxString selectedText = "*";
	outputScreen->AppendText(selectedText);
	evt.Skip();
}

void Window::EqualButtonClicked(wxCommandEvent& evt) {

	CalculatorProcessor Calculator;
	std::string convertedString = outputScreen->GetValue().ToStdString();

	outputScreen->Clear();
	if(Calculator.errorCheck()){
		outputScreen->AppendText(Calculator.inputCalculation(convertedString));
	}
	else {
		std::string errorMessage = "Input Error, check formatting...";
		outputScreen->AppendText(errorMessage);
	}
	evt.Skip();
}

void Window::BackspaceButtonClicked(wxCommandEvent& evt) {

	wxString currentText = outputScreen->GetValue();
	outputScreen->Remove(currentText.Length() - 1, currentText.Length());
	evt.Skip();
}

void Window::ClearButtonClicked(wxCommandEvent& evt) {

	outputScreen->Clear();
	evt.Skip();
}

void Window::ModButtonClicked(wxCommandEvent& evt) {
	wxString selectedText = "Mod(";
	outputScreen->AppendText(selectedText);
	evt.Skip();
}

void Window::SinButtonClicked(wxCommandEvent& evt) {
	wxString selectedText = "Sin(";
	outputScreen->AppendText(selectedText);
	evt.Skip();
}

void Window::CosButtonClicked(wxCommandEvent& evt) {
	wxString selectedText = "Cos(";
	outputScreen->AppendText(selectedText);
	evt.Skip();
}

void Window::TanButtonClicked(wxCommandEvent& evt) {
	wxString selectedText = "Tan(";
	outputScreen->AppendText(selectedText);
	evt.Skip();
}

void Window::LeftPButtonClicked(wxCommandEvent& evt) {
	wxString selectedText = "(";
	outputScreen->AppendText(selectedText);
	evt.Skip();
}

void Window::RightPButtonClicked(wxCommandEvent& evt) {
	wxString selectedText = ")";
	outputScreen->AppendText(selectedText);
	evt.Skip();
}

void Window::CommaButtonClicked(wxCommandEvent& evt) {
	wxString selectedTest = ",";
	outputScreen->AppendText(selectedTest);
	evt.Skip();
}
