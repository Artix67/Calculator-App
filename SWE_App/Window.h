
#include "wx/wx.h"



class Window : public wxFrame
{

public:

	Window();
	~Window();
	wxTextCtrl* outputScreen = nullptr;
	wxDECLARE_EVENT_TABLE();

	void ZeroButtonClicked(wxCommandEvent& evt);
	void OneButtonClicked(wxCommandEvent& evt);
	void TwoButtonClicked(wxCommandEvent& evt);
	void ThreeButtonClicked(wxCommandEvent& evt);
	void FourButtonClicked(wxCommandEvent& evt);
	void FiveButtonClicked(wxCommandEvent& evt);
	void SixButtonClicked(wxCommandEvent& evt);
	void SevenButtonClicked(wxCommandEvent& evt);
	void EightButtonClicked(wxCommandEvent& evt);
	void NineButtonClicked(wxCommandEvent& evt);
	void DecimalButtonClicked(wxCommandEvent& evt);
	void PlusButtonClicked(wxCommandEvent& evt);
	void MinusButtonClicked(wxCommandEvent& evt);
	void DivideButtonClicked(wxCommandEvent& evt);
	void MultiplyButtonClicked(wxCommandEvent& evt);
	void EqualButtonClicked(wxCommandEvent& evt);
	void BackspaceButtonClicked(wxCommandEvent& evt);
	void ClearButtonClicked(wxCommandEvent& evt);
	void ModButtonClicked(wxCommandEvent& evt);
	void SinButtonClicked(wxCommandEvent& evt);
	void CosButtonClicked(wxCommandEvent& evt);
	void TanButtonClicked(wxCommandEvent& evt);
};

