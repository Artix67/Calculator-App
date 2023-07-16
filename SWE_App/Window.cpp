
#pragma once
#include "Window.h"
#include "App.h"
#include <string>
#include "ButtonFactory.h"

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

	outputScreen = new wxTextCtrl(this, 14, "", wxPoint(30, 30), wxSize(525, 50));
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

	std::string convertedString = outputScreen->GetValue().ToStdString();

	if (convertedString.find("+")) {
		std::string sub1 = convertedString.substr(0, convertedString.find("+"));
		std::string sub2 = convertedString.substr(convertedString.find("+") + 1, convertedString.length());
		float val1 = std::stof(sub1);
		float val2 = std::stof(sub2);
		wxString result = wxString::Format(wxT("%f"), (val1 + val2));
		outputScreen->Clear();
		outputScreen->AppendText(result);
	}

	else if (convertedString.find("-")) {
		std::string sub1 = convertedString.substr(0, convertedString.find("-"));
		std::string sub2 = convertedString.substr(convertedString.find("-") + 1, convertedString.length());
		float val1 = std::stof(sub1);
		float val2 = std::stof(sub2);
		wxString result = wxString::Format(wxT("%f"), (val1 + val2));
		outputScreen->Clear();
		outputScreen->AppendText(result);
	}

	else if (convertedString.find("*")) {
		std::string sub1 = convertedString.substr(0, convertedString.find("*"));
		std::string sub2 = convertedString.substr(convertedString.find("*") + 1, convertedString.length());
		float val1 = std::stof(sub1);
		float val2 = std::stof(sub2);
		wxString result = wxString::Format(wxT("%f"), (val1 + val2));
		outputScreen->Clear();
		outputScreen->AppendText(result);
	}

	else if (convertedString.find("/")) {
		std::string sub1 = convertedString.substr(0, convertedString.find("/"));
		std::string sub2 = convertedString.substr(convertedString.find("/+") + 1, convertedString.length());
		float val1 = std::stof(sub1);
		float val2 = std::stof(sub2);
		wxString result = wxString::Format(wxT("%f"), (val1 + val2));
		outputScreen->Clear();
		outputScreen->AppendText(result);
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

	evt.Skip();
}

void Window::SinButtonClicked(wxCommandEvent& evt) {

	evt.Skip();
}

void Window::CosButtonClicked(wxCommandEvent& evt) {

	evt.Skip();
}

void Window::TanButtonClicked(wxCommandEvent& evt) {

	evt.Skip();
}

