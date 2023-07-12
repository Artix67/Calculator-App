
#include "Window.h"
#include "App.h"
#include <string>

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


Window::Window() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(595, 390)) {

	zeroButton = new wxButton(this, 0, "0", wxPoint(125, 270), wxSize(85, 50));
	oneButton = new wxButton(this, 1, "1", wxPoint(30, 210), wxSize(85, 50));
	twoButton = new wxButton(this, 2, "2", wxPoint(125, 210), wxSize(85, 50));
	threeButton = new wxButton(this, 3, "3", wxPoint(220, 210), wxSize(85, 50));
	fourButton = new wxButton(this, 4, "4", wxPoint(30, 150), wxSize(85, 50));
	fiveButton = new wxButton(this, 5, "5", wxPoint(125, 150), wxSize(85, 50));
	sixButton = new wxButton(this, 6, "6", wxPoint(220, 150), wxSize(85, 50));
	sevenButton = new wxButton(this, 7, "7", wxPoint(30, 90), wxSize(85, 50));
	eightButton = new wxButton(this, 8, "8", wxPoint(125, 90), wxSize(85, 50));
	nineButton = new wxButton(this, 9, "9", wxPoint(220, 90), wxSize(85, 50));
	decimalButton = new wxButton(this, 10, ".", wxPoint(30, 270), wxSize(85, 50));
	plusButton = new wxButton(this, 11, "+", wxPoint(315, 90), wxSize(85, 50));
	minusButton = new wxButton(this, 12, "-", wxPoint(315, 150), wxSize(85, 50));
	divideButton = new wxButton(this, 13, "/", wxPoint(315, 210), wxSize(85, 50));
	multiplyButton = new wxButton(this, 14, "*", wxPoint(315, 270), wxSize(85, 50));
	equalButton = new wxButton(this, 15, "=", wxPoint(220, 270), wxSize(85, 50));
	backspaceBbutton = new wxButton(this, 16, "Delete", wxPoint(505, 90), wxSize(50, 110));
	clearBbutton = new wxButton(this, 17, "Clear", wxPoint(505, 210), wxSize(50, 110));
	modButton = new wxButton(this, 18, "Mod", wxPoint(410, 90), wxSize(85, 50));
	sinButton = new wxButton(this, 19, "Sin", wxPoint(410, 150), wxSize(85, 50));
	cosButton = new wxButton(this, 20, "Cos", wxPoint(410, 210), wxSize(85, 50));
	tanButton = new wxButton(this, 21, "Tan", wxPoint(410, 270), wxSize(85, 50));

	outputScreen = new wxTextCtrl(this, 14, "", wxPoint(30, 30), wxSize(525, 50));
}

Window::~Window() {

}

void Window::ZeroButtonClicked(wxCommandEvent &evt) {
	wxString selectedText = "0";
	outputScreen->AppendText(selectedText);
	evt.Skip();
}

void Window::OneButtonClicked(wxCommandEvent &evt) {
	wxString selectedText = "1";
	outputScreen->AppendText(selectedText);
	evt.Skip();
}

void Window::TwoButtonClicked(wxCommandEvent &evt) {
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

void Window::DivideButtonClicked(wxCommandEvent &evt) {
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
		std::string sub2 = convertedString.substr(convertedString.find("+") +1, convertedString.length());
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
	outputScreen->Remove(currentText.Length()-1, currentText.Length());
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
