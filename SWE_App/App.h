
#include "wx/wx.h"

class Window;

class App : public wxApp
{

	Window* mainFrame = nullptr;

public:
	App();
	~App();
	virtual bool OnInit();
};


