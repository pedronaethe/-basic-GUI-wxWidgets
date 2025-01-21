#pragma once
#include <wx/wx.h>

class MainFrame : public wxFrame
{
	/*Provides the graphical user interface (GUI) where the user interacts with the application.*/
	/*Acts as the container for GUI elements like menus, toolbars, status bars, and child controls (buttons, text boxes, etc.).*/
	/*It is a top-level window that can be created with a title, size, and style.*/
public:
	MainFrame(const wxString& title);
private: 
	/*Event handler for the button click event*/
	void OnButtonClicked(wxCommandEvent& evt);
	void OnSliderChanged(wxCommandEvent& evt);
	void OnTextChanged(wxCommandEvent& evt);
	/*Binding the event handler to the button events using an event table*/
	wxDECLARE_EVENT_TABLE();
};

