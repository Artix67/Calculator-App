
#pragma once
#include "App.h"
#include "Window.h"

wxIMPLEMENT_APP(App);

App::App() {

}

App::~App() {

}

bool App::OnInit() {

	mainFrame = new Window();
	mainFrame->Show();
	return true;
}

