#include "Window.h"

wxBEGIN_EVENT_TABLE(Window, wxFrame)

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

void Window::OnButtonClicked(wxCommandEvent &evt) {

}
