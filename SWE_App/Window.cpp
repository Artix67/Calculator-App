#include "Window.h"

Window::Window() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(750, 500)) {

	button1 = new wxButton(this, wxID_ANY, "hello", wxPoint(), wxSize());
	button1 = new wxButton(this, wxID_ANY, "World", wxPoint(), wxSize());
	textBox1 = nullptr;

}
