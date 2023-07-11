#include "Window.h"

Window::Window() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(595, 390)) {

	zeroButton = new wxButton(this, wxID_ANY, "0", wxPoint(30, 270), wxSize(180, 50));
	oneButton = new wxButton(this, wxID_ANY, "1", wxPoint(30, 210), wxSize(85, 50));
	twoButton = new wxButton(this, wxID_ANY, "2", wxPoint(125, 210), wxSize(85, 50));
	threeButton = new wxButton(this, wxID_ANY, "3", wxPoint(220, 210), wxSize(85, 50));
	fourButton = new wxButton(this, wxID_ANY, "4", wxPoint(30, 150), wxSize(85, 50));
	fiveButton = new wxButton(this, wxID_ANY, "5", wxPoint(125, 150), wxSize(85, 50));
	sixButton = new wxButton(this, wxID_ANY, "6", wxPoint(220, 150), wxSize(85, 50));
	sevenButton = new wxButton(this, wxID_ANY, "7", wxPoint(30, 90), wxSize(85, 50));
	eightButton = new wxButton(this, wxID_ANY, "8", wxPoint(125, 90), wxSize(85, 50));
	nineButton = new wxButton(this, wxID_ANY, "9", wxPoint(220, 90), wxSize(85, 50));
	plusButton = new wxButton(this, wxID_ANY, "+", wxPoint(315, 90), wxSize(85, 50));
	minusButton = new wxButton(this, wxID_ANY, "-", wxPoint(315, 150), wxSize(85, 50));
	divideButton = new wxButton(this, wxID_ANY, "/", wxPoint(315, 210), wxSize(85, 50));
	multiplyButton = new wxButton(this, wxID_ANY, "*", wxPoint(315, 270), wxSize(85, 50));
	equalButton = new wxButton(this, wxID_ANY, "=", wxPoint(220, 270), wxSize(85, 50));
	backspaceBbutton = new wxButton(this, wxID_ANY, "Delete", wxPoint(505, 90), wxSize(50, 110));
	clearBbutton = new wxButton(this, wxID_ANY, "Clear", wxPoint(505, 210), wxSize(50, 110));
	modButton = new wxButton(this, wxID_ANY, "Mod", wxPoint(410, 90), wxSize(85, 50));
	sinButton = new wxButton(this, wxID_ANY, "Sin", wxPoint(410, 150), wxSize(85, 50));
	cosButton = new wxButton(this, wxID_ANY, "Cos", wxPoint(410, 210), wxSize(85, 50));
	tanButton = new wxButton(this, wxID_ANY, "Tan", wxPoint(410, 270), wxSize(85, 50));

	textBox1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(30, 30), wxSize(525, 50));

	//test
}
