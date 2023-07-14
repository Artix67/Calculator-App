#include "ButtonFactory.h"
#include "wx/wx.h"
#include "Window.h"
#include "App.h"

ButtonFactory::ButtonFactory() {

}

ButtonFactory::~ButtonFactory() {

}

wxButton* CreateZeroButton(Window* frame, wxButton *button) {
	button = new wxButton(frame, 0, "0", wxPoint(125, 270), wxSize(85, 50));
	return button;
}

wxButton* CreateOneButton(Window* frame, wxButton *button) {
	button = new wxButton(frame, 1, "1", wxPoint(30, 210), wxSize(85, 50));
	return button;
}

wxButton* CreateTwoButton(Window* frame, wxButton* button) {
	button = new wxButton(frame, 2, "2", wxPoint(125, 210), wxSize(85, 50));
	return button;
}

wxButton* CreateThreeButton(Window* frame, wxButton* button) {
	button = new wxButton(frame, 3, "3", wxPoint(220, 210), wxSize(85, 50));
	return button;
}

wxButton* CreateFourButton(Window* frame, wxButton* button) {
	button = new wxButton(frame, 4, "4", wxPoint(30, 150), wxSize(85, 50));
	return button;
}

wxButton* CreateFiveButton(Window* frame, wxButton* button) {
	button = new wxButton(frame, 5, "5", wxPoint(125, 150), wxSize(85, 50));
	return button;
}

wxButton* CreateSixButton(Window* frame, wxButton* button) {
	button = new wxButton(frame, 6, "6", wxPoint(220, 150), wxSize(85, 50));
	return button;
}

wxButton* CreateSevenButton(Window* frame, wxButton* button) {
	button = new wxButton(frame, 7, "7", wxPoint(30, 90), wxSize(85, 50));
	return button;
}

wxButton* CreateEightButton(Window* frame, wxButton* button) {
	button = new wxButton(frame, 8, "8", wxPoint(125, 90), wxSize(85, 50));
	return button;
}

wxButton* CreateNineButton(Window* frame, wxButton* button) {
	button = new wxButton(frame, 9, "9", wxPoint(220, 90), wxSize(85, 50));
	return button;
}

wxButton* CreateDecimalButton(Window* frame, wxButton* button) {
	button = new wxButton(frame, 10, ".", wxPoint(30, 270), wxSize(85, 50));
	return button;
}

wxButton* CreatePlusButton(Window* frame, wxButton* button) {
	button = new wxButton(frame, 11, "+", wxPoint(315, 90), wxSize(85, 50));
	return button;
}

wxButton* CreateMinusButton(Window* frame, wxButton* button) {
	button = new wxButton(frame, 12, "-", wxPoint(315, 150), wxSize(85, 50));
	return button;
}

wxButton* CreateMultiplyButton(Window* frame, wxButton* button) {
	button = new wxButton(frame, 14, "*", wxPoint(315, 270), wxSize(85, 50));
	return button;
}

wxButton* CreateDivideButton(Window* frame, wxButton* button) {
	button = new wxButton(frame, 13, "/", wxPoint(315, 210), wxSize(85, 50));
	return button;
}

wxButton* CreatcEqualButton(Window* frame, wxButton* button) {
	button = new wxButton(frame, 15, "=", wxPoint(220, 270), wxSize(85, 50));
	return button;
}

wxButton* CreateBackspaceButton(Window* frame, wxButton* button) {
	button = new wxButton(frame, 16, "Delete", wxPoint(505, 90), wxSize(50, 110));
	return button;
}

wxButton* CreateClearButton(Window* frame, wxButton* button) {
	button = new wxButton(frame, 17, "Clear", wxPoint(505, 210), wxSize(50, 110));
	return button;
}

wxButton* CreateModButton(Window* frame, wxButton* button) {
	button = new wxButton(frame, 18, "Mod", wxPoint(410, 90), wxSize(85, 50));
	return button;
}

wxButton* CreateCosButton(Window* frame, wxButton* button) {
	button = new wxButton(frame, 20, "Cos", wxPoint(410, 210), wxSize(85, 50));
	return button;
}

wxButton* CreateSinButton(Window* frame, wxButton* button) {
	button = new wxButton(frame, 19, "Sin", wxPoint(410, 150), wxSize(85, 50));
	return button;
}

wxButton* CreateTanButton(Window* frame, wxButton* button) {
	button = new wxButton(frame, 21, "Tan", wxPoint(410, 270), wxSize(85, 50));
	return button;
}

