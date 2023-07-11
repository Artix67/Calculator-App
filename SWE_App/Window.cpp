#include "Window.h"

Window::Window() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(750, 500)) {

	zeroButton = new wxButton(this, wxID_ANY, "0", wxPoint(10, 20), wxSize(20, 4));
	oneButton = new wxButton(this, wxID_ANY, "1", wxPoint(30, 240), wxSize(85, 50));
	twoButton = new wxButton(this, wxID_ANY, "2", wxPoint(10, 10), wxSize(20, 4));
	threeButton = new wxButton(this, wxID_ANY, "3", wxPoint(10, 10), wxSize(20, 4));
	fourButton = new wxButton(this, wxID_ANY, "4", wxPoint(30, 180), wxSize(85, 50));
	fiveButton = new wxButton(this, wxID_ANY, "5", wxPoint(10, 10), wxSize(20, 4));
	sixButton = new wxButton(this, wxID_ANY, "6", wxPoint(10, 10), wxSize(20, 4));
	sevenButton = new wxButton(this, wxID_ANY, "7", wxPoint(30, 120), wxSize(85, 50));
	eightButton = new wxButton(this, wxID_ANY, "8", wxPoint(10, 10), wxSize(20, 4));
	nineButton = new wxButton(this, wxID_ANY, "9", wxPoint(10, 10), wxSize(20, 4));
	plusButton = new wxButton(this, wxID_ANY, "+", wxPoint(10, 10), wxSize(20, 4));
	minusButton = new wxButton(this, wxID_ANY, "-", wxPoint(10, 10), wxSize(20, 4));
	divideButton = new wxButton(this, wxID_ANY, "/", wxPoint(10, 10), wxSize(20, 4));
	multiplyButton = new wxButton(this, wxID_ANY, "*", wxPoint(10, 10), wxSize(20, 4));
	equalButton = new wxButton(this, wxID_ANY, "=", wxPoint(10, 10), wxSize(20, 4));
	backspaceBbutton = new wxButton(this, wxID_ANY, "Backspace", wxPoint(10, 10), wxSize(20, 4));
	clearBbutton = new wxButton(this, wxID_ANY, "Clear", wxPoint(10, 10), wxSize(20, 4));
	modButton = new wxButton(this, wxID_ANY, "Mod", wxPoint(10, 10), wxSize(20, 4));
	sinButton = new wxButton(this, wxID_ANY, "Sin", wxPoint(10, 10), wxSize(20, 4));
	cosButton = new wxButton(this, wxID_ANY, "Cos", wxPoint(10, 10), wxSize(20, 4));
	tanButton = new wxButton(this, wxID_ANY, "Tan", wxPoint(10, 10), wxSize(20, 4));

}
