#include "Window.h"

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
	EVT_BUTTON(00, DecimalButtonClicked)
	EVT_BUTTON(01, PlusButtonClicked)
	EVT_BUTTON(02, MinusButtonClicked)
	EVT_BUTTON(03, DivideButtonClicked)
	EVT_BUTTON(04, MultiplyButtonClicked)
	EVT_BUTTON(05, EqualButtonClicked)
	EVT_BUTTON(06, BackspaceButtonClicked)
	EVT_BUTTON(07, ClearButtonClicked)
	EVT_BUTTON(10, ModButtonClicked)
	EVT_BUTTON(11, SinButtonClicked)
	EVT_BUTTON(12, CosButtonClicked)
	EVT_BUTTON(13, TanButtonClicked)

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
	decimalButton = new wxButton(this, 00, ".", wxPoint(30, 270), wxSize(85, 50));
	plusButton = new wxButton(this, 01, "+", wxPoint(315, 90), wxSize(85, 50));
	minusButton = new wxButton(this, 02, "-", wxPoint(315, 150), wxSize(85, 50));
	divideButton = new wxButton(this, 03, "/", wxPoint(315, 210), wxSize(85, 50));
	multiplyButton = new wxButton(this, 04, "*", wxPoint(315, 270), wxSize(85, 50));
	equalButton = new wxButton(this, 05, "=", wxPoint(220, 270), wxSize(85, 50));
	backspaceBbutton = new wxButton(this, 06, "Delete", wxPoint(505, 90), wxSize(50, 110));
	clearBbutton = new wxButton(this, 07, "Clear", wxPoint(505, 210), wxSize(50, 110));
	modButton = new wxButton(this, 10, "Mod", wxPoint(410, 90), wxSize(85, 50));
	sinButton = new wxButton(this, 11, "Sin", wxPoint(410, 150), wxSize(85, 50));
	cosButton = new wxButton(this, 12, "Cos", wxPoint(410, 210), wxSize(85, 50));
	tanButton = new wxButton(this, 13, "Tan", wxPoint(410, 270), wxSize(85, 50));

	inputBox = new wxTextCtrl(this, 14, "", wxPoint(30, 30), wxSize(257.50, 50));
	outputBox = new wxListBox(this, 15, wxPoint(297.50, 30), wxSize(257.50, 50));
}

Window::~Window() {

}

void Window::ZeroButtonClicked(wxCommandEvent &evt) {
	
}

void Window::OneButtonClicked(wxCommandEvent &evt) {

}

void Window::TwoButtonClicked(wxCommandEvent &evt) {

}

void Window::ThreeButtonClicked(wxCommandEvent& evt) {

}

void Window::FourButtonClicked(wxCommandEvent& evt) {

}

void Window::FiveButtonClicked(wxCommandEvent& evt) {

}

void Window::SixButtonClicked(wxCommandEvent& evt) {

}

void Window::SevenButtonClicked(wxCommandEvent& evt) {

}

void Window::EightButtonClicked(wxCommandEvent& evt) {

}

void Window::NineButtonClicked(wxCommandEvent& evt) {

}

void Window::DecimalButtonClicked(wxCommandEvent& evt) {

}

void Window::PlusButtonClicked(wxCommandEvent& evt) {

}

void Window::MinusButtonClicked(wxCommandEvent& evt) {

}

void Window::DivideButtonClicked(wxCommandEvent &evt) {

}

void Window::MultiplyButtonClicked(wxCommandEvent& evt) {

}

void Window::EqualButtonClicked(wxCommandEvent& evt) {

}

void Window::BackspaceButtonClicked(wxCommandEvent& evt) {

}

void Window::ClearButtonClicked(wxCommandEvent& evt) {

}

void Window::ModButtonClicked(wxCommandEvent& evt) {

}

void Window::SinButtonClicked(wxCommandEvent& evt) {

}

void Window::CosButtonClicked(wxCommandEvent& evt) {

}

void Window::TanButtonClicked(wxCommandEvent& evt) {

}
