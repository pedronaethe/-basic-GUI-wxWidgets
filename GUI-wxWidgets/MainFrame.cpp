#include "MainFrame.h"
#include <wx/wx.h>
#include <wx/spinctrl.h>

/* Constructor of the MainFrame Class*/
MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title)
{
	/*A panel is a window on which controls are placed.It is used to group controls together and manage their layout.*/
	wxPanel* panel = new wxPanel(this);

	/*Button is a child of Panel*/
	wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(150, 50), wxSize(100, 35));

	wxCheckBox* checkBox = new wxCheckBox(panel, wxID_ANY, "Check Box", wxPoint(550, 55));

	/*Static text is a read - only text control that displays a single line of text.*/
	wxStaticText* staticText = new wxStaticText(panel, wxID_ANY, "Static Text - NOT EDITABLE", wxPoint(120, 150));

	/*This is editable text, size -1 means the default value for height*/
	wxTextCtrl* textCtrl = new wxTextCtrl(panel, wxID_ANY, "Text Control - EDITABLE", wxPoint(500, 145), wxSize(200, -1));

	/*Slider is a control that allows the user to select a value from a range of values by moving a slider.*/
	/*The range of values is specified by the minimum and maximum values, and the current value is specified by the position of the slider.*/
	/*Here 25 is current, 0 is min and 100 is max*/
	wxSlider* slider = new wxSlider(panel, wxID_ANY, 25, 0, 100, wxPoint(100, 250), wxSize(200, -1));

	/*Gauge is a control that displays a horizontal or vertical bar that represents a range of values.*/
	/*The current value is shown as a filled portion of the bar, and the total range is shown as the entire bar.*/
	wxGauge* gauge = new wxGauge(panel, wxID_ANY, 100, wxPoint(500, 255), wxSize(200, -1));
	gauge->SetValue(50);

	/*Radio box is a control that allows the user to select one option from a group of options.*/
	//wxString choices[] = { "Option 1", "Option 2", "Option 3" }; or
	wxArrayString choices;
	choices.Add("Option 1");
	choices.Add("Option 2");
	choices.Add("Option 3");

	wxChoice* choice = new wxChoice(panel, wxID_ANY, wxPoint(150, 375), wxSize(200, -1), choices);

	/*Have a selected item by default*/
	choice->Select(0);

	/*Spin control is a control that allows the user to select a value from a range of values by clicking on up and down arrows.*/
	wxSpinCtrl* spinCtrl = new wxSpinCtrl(panel, wxID_ANY, "Here", wxPoint(500, 375), wxSize(100, -1));

	/*ListBox is a control that displays a list of items that the user can select from. */
	wxListBox* listBox = new wxListBox(panel, wxID_ANY, wxPoint(150, 475), wxSize(100, -1), choices);

	/*RadioBox*/
	wxRadioBox* radioBox = new wxRadioBox(panel, wxID_ANY, "Radio Box", wxPoint(485, 475), wxDefaultSize, choices);


}
